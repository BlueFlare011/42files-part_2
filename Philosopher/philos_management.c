#include "philo.h"

float	get_time(struct timeval *start, struct timeval *end)
{
	return (1e+3 * (end->tv_sec - start->tv_sec)) + (1e-3 * (end->tv_usec - start->tv_usec));
}

void	*rutine(void *param)
{
	t_philo			*philoData;
	pthread_mutex_t	*left;
	pthread_mutex_t	*right;
	struct timeval	start;
	struct timeval	end;

	philoData = (t_philo *)param;
	if (philoData->id == 1)
	{
		left = &philoData->param->forks[philoData->param->n_philo - 1];
		right = &philoData->param->forks[0];
	}
	else
	{
		left = &philoData->param->forks[philoData->id - 2];
		right = &philoData->param->forks[philoData->id - 1];
	}
	gettimeofday(&start, NULL);
	while (1)
	{
		pthread_mutex_lock(right);
		gettimeofday(&end, NULL);
		printf("%0.3f %d has taken a fork\n", get_time(&start, &end), philoData->id);
		pthread_mutex_lock(left);
		gettimeofday(&end, NULL);
		printf("%0.3f %d has taken a fork\n", get_time(&start, &end), philoData->id);
		printf("%0.3f %d is eating\n", get_time(&start, &end), philoData->id);
		usleep(philoData->param->t_eat * 1000);
		pthread_mutex_unlock(right);
		pthread_mutex_unlock(left);
		gettimeofday(&end, NULL);
		printf("%0.3f %d is sleeping\n", get_time(&start, &end), philoData->id);
		usleep(philoData->param->t_sleep * 1000);
		gettimeofday(&end, NULL);
		printf("%0.3f %d is thinking\n", get_time(&start, &end), philoData->id);
		usleep(philoData->param->t_sleep * 1000);
	}
	return (NULL);
}
