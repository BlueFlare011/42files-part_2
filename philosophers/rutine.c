#include "philo.h"

/*
- Comer  
- Dormir 
- Pensar 
*/

void	eating(t_thread_data *data, int	type)
{
	if (type)
	{
		pthread_mutex_lock(data->right);
		pthread_mutex_lock(data->left);
	}
	else
	{
		pthread_mutex_lock(data->left);
		pthread_mutex_lock(data->right);
	}
	usleep(data[0].param->t_eat);
}

void	*rutine(void	*param)
{
	t_thread_data	*data;

	data = param;
	while (data->times_eat < data->param->num_philo || data->param->alive)
	{
		eating(data, 0);
	}
	return (NULL);
}
