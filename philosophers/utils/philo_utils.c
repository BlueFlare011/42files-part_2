#include "../philo.h"

void smartPrint(char *message, struct timeval *init, struct timeval *end, t_thread_data *data)
{
	pthread_mutex_lock(data->param->w_print);
	printf("%ums %d %s\n", getTime(end, init), data->id, message);
	pthread_mutex_unlock(data->param->w_print);
}
