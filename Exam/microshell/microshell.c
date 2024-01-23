#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

int err(char *str) 
{
    while (*str)
        write(2, str++, 1);
    return 1;
}

int cd(char **argv, int i) 
{
    if (i != 2)
        return err("error: cd: bad arguments\n");
    else if (chdir(argv[1]) == -1){
        write(2, "error: cd: cannot change directory to ", 38);
		err(argv[1]);
		write(2, "\n", 1);
		return 1;
	}
    return 0;
}

int exec(char **argv, char **envp, int i) 
{
    int fd[2];
    int status;
    int has_pipe = argv[i] && !strcmp(argv[i], "|");

    if (has_pipe && pipe(fd) == -1)
        return err("error: fatal\n");

    int pid = fork();
    if (!pid) 
    {
        argv[i] = 0;
        if (has_pipe && (dup2(fd[1], 1) == -1)){
			close(fd[0]);
			close(fd[1]);
            return err("error: fatal\n");
		}
        execve(*argv, argv, envp);
        write(2, "error: cannot execute ", 22);
		err(*argv);
		write(2, "\n", 1);
		return 1;
    }
    waitpid(pid, &status, 0);
    if (has_pipe && (dup2(fd[0], 0) == -1)){
		close(fd[0]);
		close(fd[1]);
		return err("error: fatal\n");
	}
    return WIFEXITED(status) && WEXITSTATUS(status);
}

int main(int argc, char **argv, char **envp) 
{
    int    i = 0;
    int    status = 0;

    if (argc <= 1) 
		return 0;
    while (argv[i] && argv[++i]) 
    {
        argv += i;
        i = 0;
        while (argv[i] && strcmp(argv[i], "|") && strcmp(argv[i], ";"))
            i++;
        if (!strcmp(*argv, "cd"))
            status = cd(argv, i);
        else if (i){
            status = exec(argv, envp, i);
		}
    }
    return status;
}