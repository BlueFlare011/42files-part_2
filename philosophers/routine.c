#include "philo.h"

unsigned int getTime(struct timeval *end, struct timeval *init)
{
	gettimeofday(end, NULL);
	return(end->tv_sec * 1000 + end->tv_usec / 1000)
		- (init->tv_sec * 1000 + init->tv_usec / 1000);
}

void	eating(t_thread_data *data, struct timeval *init, struct timeval *end)
{
	if (data->id % 2)
	{
		pthread_mutex_lock(data->left);
		smartPrint("has taken a fork(left)", init, end, data);
		pthread_mutex_lock(data->right);
		smartPrint("has taken a fork(right)", init, end, data);
	}
	else
	{
		pthread_mutex_lock(data->right);
		smartPrint("has taken a fork(right)", init, end, data);
		pthread_mutex_lock(data->left);
		smartPrint("has taken a fork(left)", init, end, data);
	}
	smartPrint("is eating", init, end, data);
	while (getTime(end, init) - (data->time_aux) < (unsigned int)data->param->t_eat)
	{
		if (!data->param->alive)
			exit(1);
	}
	data->time_aux = getTime(end, init);
	usleep(50);
	if (data->id % 2)
	{
		pthread_mutex_unlock(data->right);
		pthread_mutex_unlock(data->left);
	}
	else
	{
		pthread_mutex_unlock(data->left);
		pthread_mutex_unlock(data->right);
	}
}

void	*routine(void	*param)
{
	t_thread_data	*data;
	struct timeval	init;
	struct timeval	end;

	data = param;
	gettimeofday(&init, NULL);
	while (data->param->alive)
	{
		eating(data, &init, &end);
		data->times_eat++;
		if (data->times_eat == data->param->n_eat)
		{
			printf("Filosofo %d ha terminado\n", data->id);
			break;
		}
		smartPrint("is sleeping", &init, &end, data);
		while (getTime(&end, &init) - data->time_aux < (unsigned int)data->param->t_sleep)
		{
			if (!data->param->alive)
				exit(1);
		}
		data->time_aux = getTime(&end, &init);
		usleep(50);
		smartPrint("is thinking", &init, &end, data);
	}
	return (NULL);
}
