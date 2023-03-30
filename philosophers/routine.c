#include "philo.h"

void sleeping(t_thread_data *data)
{
	smartPrint("is sleeping", data);
	while (getTime(&data->end, &data->init) - data->time_aux < (unsigned int)data->param->t_sleep)
	{
		if (!data->param->alive)
			exit(1);
	}
	data->time_aux = getTime(&data->end, &data->init);
	usleep(50);
}

void grabForks(t_thread_data *data)
{
	if (data->id % 2)
	{
		pthread_mutex_lock(data->left);
		smartPrint("has taken a fork(left)", data);
		pthread_mutex_lock(data->right);
		smartPrint("has taken a fork(right)", data);
	}
	else
	{
		pthread_mutex_lock(data->right);
		smartPrint("has taken a fork(right)", data);
		pthread_mutex_lock(data->left);
		smartPrint("has taken a fork(left)", data);
	}
}

void	eating(t_thread_data *data)
{	
	grabForks(data);
	smartPrint("is eating", data);
	while (getTime(&data->end, &data->init) - (data->time_aux) < (unsigned int)data->param->t_eat)
	{
		if (!data->param->alive)
			exit(1);
	}
	data->time_aux = getTime(&data->end, &data->init);
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

	data = param;
	gettimeofday(&data->init, NULL);
	while (data->param->alive)
	{
		eating(data);
		data->times_eat++;
		if (data->times_eat == data->param->n_eat)
		{
			printf("Filosofo %d ha terminado\n", data->id);
			break;
		}
		sleeping(data);
		smartPrint("is thinking", data);
	}
	return (NULL);
}
