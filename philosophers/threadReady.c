#include "philo.h"

void	createConstStruct(t_const_data *data, int length, char **args)
{
	data->num_philo = ft_atoi(args[1]);	// Asgnamos los argumentos al struct
	data->t_die = ft_atoi(args[2]);
	data->t_eat = ft_atoi(args[3]);
	data->t_sleep = ft_atoi(args[4]);
	if (length == 5)
		data->n_eat = ft_atoi(args[1]);
	else
		data->n_eat = -1;
	data->alive = 1;	//Asignamos la flag que señala si alguien a muerto
}
/*
void	setTheTable2(t_const_data *param, t_thread_data **t_data,
	pthread_mutex_t **forks)
{
	int	i;

	i = 0;
	while (i < param->num_philo)
		pthread_mutex_init(forks[i++], NULL);
	i = 0;
	while (i < param->num_philo)
	{
		t_data[i]->id = i + 1;
		t_data[i]->param = param;
		t_data[i]->left = forks[0];
		t_data[i]->right = forks[param->num_philo - 1];
		if (i != 0)
		{
			t_data[i]->left = forks[i];
			t_data[i]->right = forks[i - 1];
		}
		i++;
	}
}
*/

int	setTheTable(t_const_data *param, t_thread_data **t_data,
	pthread_mutex_t **forks, pthread_t **philos)
{
	int	i;

	*t_data = malloc(sizeof(t_thread_data) * param->num_philo);
	if (*t_data)
		return (1);
	*forks = malloc(sizeof(pthread_mutex_t) * param->num_philo);
	if (*forks)
	{
		free(*t_data);
		return (1);
	}
	*philos = malloc(sizeof(pthread_t) * param->num_philo);
	if (*philos)
	{
		free(*t_data);
		free(*forks);
		return (1);
	}
	i = 0;
	while (i < param->num_philo)
		pthread_mutex_init(forks[i++], NULL);
	i = 0;
	while (i < param->num_philo)
	{
		t_data[i]->id = i + 1;
		t_data[i]->param = param;
		t_data[i]->left = forks[0];
		t_data[i]->right = forks[param->num_philo - 1];
		if (i != 0)
		{
			t_data[i]->left = forks[i];
			t_data[i]->right = forks[i - 1];
		}
		i++;
	}
	return (0);
}
