#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void	*rutine()
{
	sleep(5);
	printf("Test from threads\n");
	return (NULL);
}

int main (void)
{
	pthread_t t1;
	//Creates a thread as of a function
	// Param: 1) Address from memory 2) Atributes for the thread, if you put NULL the thread will run with defaults options 3) Address of the function 4) Arguments for the functions, if there no arguments put NULL
	// Return: 0 works correctly, other there was an error
	pthread_create(&t1, NULL, &rutine, NULL);
	// This works like waitpid but with threads
	// Params: 1) Variable with thread 2) The return of the thread
	// Return: 0 works correctly, other there was an error
	pthread_join(t1, NULL);
	return (0);
}
