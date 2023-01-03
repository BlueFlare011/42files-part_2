#include "philo.h"

float	get_time(struct timeval *start, struct timeval *end)
{
	return (1e+3 * (end->tv_sec - start->tv_sec)) + (1e-3 * (end->tv_usec - start->tv_usec));
}

void	*rutine(void *param)
{
	t_philo			*philoData;
	struct timeval	start;
	struct timeval	end;

	philoData = (t_philo *)param;
	gettimeofday(&start, NULL);
	while (1)
	{	//No funcionan los mutex, hay que echar un vistazo, me voy a suspender un push_swap
		pthread_mutex_lock(&philoData->right);
		gettimeofday(&end, NULL);
		printf("%0.3f %d has taken a fork\n", get_time(&start, &end), philoData->id);
		pthread_mutex_lock(&philoData->left);
		gettimeofday(&end, NULL);
		printf("%0.3f %d has taken a fork\n", get_time(&start, &end), philoData->id);
		printf("%0.3f %d is eating\n", get_time(&start, &end), philoData->id);
		usleep(philoData->param->t_eat * 1000);
		pthread_mutex_unlock(&philoData->right);
		pthread_mutex_unlock(&philoData->left);
		gettimeofday(&end, NULL);
		printf("%0.3f %d is sleeping\n", get_time(&start, &end), philoData->id);
		usleep(philoData->param->t_sleep * 1000);
		gettimeofday(&end, NULL);
		printf("%0.3f %d is thinking\n", get_time(&start, &end), philoData->id);
		usleep(philoData->param->t_sleep * 1000);
	}
	return (NULL);
}
