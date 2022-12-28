#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>


/*
	// pthread_create //
	Creates a thread as of a function
	Param:
		1) Address from memory
		2) Atributes for the thread, if you put NULL the thread will run with defaults options
		3) Address of the function
		4) Arguments for the functions(void * format), if there no arguments put NULL
	Return: 0 works correctly, other there was an error

	// pthread_join //
	This works like waitpid but with threads
	Params: 1) Variable with thread 2) The return of the thread
	Return: 0 works correctly, other there was an error

	// pthread_mutex //
	
*/

int main (void)
{
	pthread_t t1, t2;
	int x = 5;
	
	return (0);
}
