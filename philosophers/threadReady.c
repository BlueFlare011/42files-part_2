#include "philo.h"

void	createConstStruct(t_const_data *data, int length, char **args)
{
	data->num_philo = ft_atoi(args[1]);	// Asignamos los argumentos al struct
	data->t_die = ft_atoi(args[2]);
	data->t_eat = ft_atoi(args[3]);
	data->t_sleep = ft_atoi(args[4]);
	if (length == 5)
		data->n_eat = ft_atoi(args[5]);
	else
		data->n_eat = -1;
	data->alive = 1;	//Asignamos la flag que señala si alguien a muerto
}

void	setTheTable2(t_const_data *param, t_thread_data *t_data,
	pthread_mutex_t *forks)
{
	int	i;

	i = 0;
	while (i < param->num_philo)	// Iniciamos la array de mutex
		pthread_mutex_init(&forks[i++], NULL);
	i = 0;
	while (i < param->num_philo)	// Asignamos id, y tenedores a los struct de cada philo
	{
		t_data[i].id = i + 1;
		t_data[i].param = param;	// puntero a struct con los datos generales
		t_data[i].left = &forks[0];	//El primero philosofo debe coger el primer tenedor y el ultimo tenedor
		t_data[i].right = &forks[param->num_philo - 1]; // El orden de los filosofos en la mesa es en sentido horario
		t_data[i].times_eat = 0;
		t_data[i].time_aux = 0;
		t_data[i].time_dead = 0;
		if (i != 0)	// Los demas cogen el de su id y el anterior
		{
			t_data[i].left = &forks[i];
			t_data[i].right = &forks[i - 1];
		}
		i++;
	}
}


int	setTheTable(t_const_data *param, t_thread_data **t_data,
	pthread_mutex_t **forks, pthread_t **philos)
{
	*t_data = malloc(sizeof(t_thread_data) * param->num_philo);	// Alojamos la memoria en esta función
	if (!*t_data)
		return (1);
	*philos = malloc(sizeof(pthread_t) * param->num_philo);
	if (!*philos)
	{
		free(*t_data);
		return (1);
	}
	*forks = malloc(sizeof(pthread_mutex_t) * param->num_philo);
	if (!*forks)
	{
		free(*t_data);
		free(*philos);
		return (1);
	}
	setTheTable2(param, *t_data, *forks);	// 2ª Parte (Pasamos el puntero)
	return (0);
}
