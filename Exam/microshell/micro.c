#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>

int ft_error(char *str)
{
	while(*str){
		write(2, str, 1);
		str++;
	}
	return 1;
}

int ft_cd(char **argv, int i)
{
	if (i != 2)
		return ft_error("error: cd: bad arguments\n");
	else if (chdir(argv[1]) == -1)
		return ft_error("error: cd: cannot change directory to "), ft_error(argv[1]), ft_error("\n");
	return 0;
}

int ft_exec(char **argv, char **envp, int i)
{
	int isPipe = argv[i] && !strcmp(argv[i], "|");
	int myPipe[2];
	int status;

	if (isPipe && pipe(myPipe) == -1)
		ft_error("error: fatal\n");
	pid_t process = fork();
	if (!process){
		argv[i] = NULL;
		if (isPipe){
			dup2(myPipe[1], 1);
			close(myPipe[1]);
			close(myPipe[0]);
		}
		execve(*argv, argv, envp);
		return ft_error("cannot change directory to"), ft_error(*argv), ft_error("\n");
	}
	waitpid(process, &status, 0);	
	if (isPipe){
		dup2(myPipe[0], 0);
		close(myPipe[1]);
		close(myPipe[0]);
	}
	return WIFEXITED(status) && WEXITSTATUS(status);
}

int main(int argc, char **argv, char **envp)
{
	int status = 0;
	if (argc <= 1)
		return status;
	int i = 0;
	while (argv[i] && argv[++i]){
		argv += i;
		i = 0;
		while (argv[i] && strcmp(argv[i], "|") && strcmp(argv[i], ";"))
			i++;
		if (!strcmp(*argv, "cd"))
			status = ft_cd(argv, i);
		else if (i)
			status = ft_exec(argv, envp, i);
	}
	return (status);
}

