#include "../philo.h"

unsigned int getTime(struct timeval *end, struct timeval *init)
{
	return(end->tv_sec * 1000 + end->tv_usec / 1000)
		- (init->tv_sec * 1000 + init->tv_usec / 1000);
}

void smartPrint(char *message, t_thread_data *data)
{
	pthread_mutex_lock(data->param->w_alive);
	if (data->param->alive)
	{
		gettimeofday(&data->end, NULL);
		printf("%ums %d %s\n", getTime(&data->end, &data->init), data->id, message);
	}
	pthread_mutex_unlock(data->param->w_alive);
}
