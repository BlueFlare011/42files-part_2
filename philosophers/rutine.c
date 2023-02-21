#include "philo.h"

unsigned int getTime(struct timeval *init, struct timeval *end)
{
	return ((end->tv_sec * 1000 + end->tv_usec / 1000) - (init->tv_sec * 1000 + init->tv_usec / 1000));
}

void	eating(t_thread_data *data, struct timeval *init, struct timeval *end)
{
	if (data->id % 2)
	{
		pthread_mutex_lock(data->right);
		gettimeofday(end, NULL);
		printf("%ums %d has taken a fork(right)\n", getTime(init, end), data->id);
		pthread_mutex_lock(data->left);
		gettimeofday(end, NULL);
		printf("%ums %d has taken a fork(left)\n", getTime(init, end), data->id);
	}
	else
	{
		pthread_mutex_lock(data->left);
		gettimeofday(end, NULL);
		printf("%ums %d has taken a fork(left)\n", getTime(init, end), data->id);
		pthread_mutex_lock(data->right);
		gettimeofday(end, NULL);
		printf("%ums %d has taken a fork(right)\n", getTime(init, end), data->id);
	}
	gettimeofday(end, NULL);
	printf("%ums %d is eating\n", getTime(init, end), data->id);
	usleep(data->param->t_eat * 1000);
	if (data->id % 2)
	{
		pthread_mutex_unlock(data->left);
		pthread_mutex_unlock(data->right);
	}
	else
	{
		pthread_mutex_unlock(data->right);
		pthread_mutex_unlock(data->left);
	}
}

void	*rutine(void	*param)
{
	t_thread_data	*data;
	struct timeval	init;
	struct timeval	end;

	data = param;
	gettimeofday(&init, NULL);
	while (data->param->alive || data->times_eat < data->param->num_philo)
	{
		eating(data, &init, &end);
		gettimeofday(&end, NULL);
		printf("%ums %d is sleeping\n", getTime(&init, &end), data->id);
		usleep(data->param->t_sleep);
		gettimeofday(&end, NULL);
		printf("%ums %d is thinking\n", getTime(&init, &end), data->id);
	}
	return (NULL);
}
