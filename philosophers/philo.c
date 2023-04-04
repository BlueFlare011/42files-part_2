#include "philo.h"

void manageProgram(t_const_data *data, t_thread_data *t_data)
{
	int	i;

	while (data->alive && data->n_eat != t_data->times_eat)
	{
		i = 0;
		while (i < data->num_philo)
		{
			gettimeofday(&data->end, NULL);
			if (getTime(&data->end, &data->init) >= (unsigned int)(t_data[i].last_meal + data->t_die) && data->alive)
			{
				pthread_mutex_lock(data->w_alive);
				data->alive = 0;
				printf("%ums %d died\n", getTime(&data->end, &data->init), t_data[i].id);
				pthread_mutex_unlock(data->w_alive);
			}
			i++;
		}
		usleep(200);
	}
}

void	createPhilos(t_const_data *data, t_thread_data *t_data, pthread_t *philos, int	n_philos)
{
	int	i;

	i = 0;
	while (i < n_philos)
	{
		pthread_create(&philos[i], NULL, routine, (void *)&t_data[i]);
		usleep(50);
		i++;
	}
	manageProgram(data, t_data);	// Controlador de los philos desde el exterior
	i = 0;
	while (i < n_philos)	// Esperamos a que mueran los philos
		pthread_join(philos[i++], NULL);
	i = 0;
	while (i < n_philos)	// Destuimos todos los mutex
	{
		pthread_mutex_destroy(t_data->left);
		pthread_mutex_destroy(t_data->right);
		i++;
	}
	pthread_mutex_destroy(t_data->param->w_alive);
}

int main(int argc, char **argv)
{
	t_const_data	param;
	t_thread_data	*t_data;
	pthread_mutex_t	*forks;
	pthread_mutex_t	mutAlive;
	pthread_t		*philos;
	int				i;

	if ((argc > 6 && argc < 5) && argError(argv))
		return (1);	// Error in arguments (1)
	pthread_mutex_init(&mutAlive, NULL); // El mutex se tiene que inicializar y pasar a la struct para que no de sigsev
	createConstStruct(&param, argc - 1, argv, &mutAlive);	// Creamos el struct
	setTheTable(&param, &t_data, &forks, &philos);	// Ponemos la mesa(Configuramos los parametros de cada hilo)
	createPhilos(&param, t_data, philos, param.num_philo);
	i = 0;
	while (i < param.num_philo)	// Esperamos a que cada hilo muera
		pthread_join(philos[i++], NULL);
	i = 0;
	while (i < param.num_philo)	// Destruimos todos los mutex
		pthread_mutex_destroy(&forks[i++]);
	pthread_mutex_destroy(param.w_alive);
	free(forks);	// Liberaos memoria alojada
	free(philos);
	free(t_data);
	return (0);
}
