#include "philo.h"

void	createPhilos(t_thread_data *t_data, pthread_t *philos, int	n_philos)
{
	int	i;

	i = 0;
	while (i < n_philos)
	{
		pthread_create(&philos[i], NULL, rutine, (void *)&t_data[i]);
		i++;
	}
	while (t_data[0].param->alive)
	{

	}
	// Matamos a los demas hilos
}

int main(int argc, char **argv)
{
	t_const_data	param;
	t_thread_data	*t_data;
	pthread_mutex_t	*forks;
	pthread_t		*philos;
	int				i;

	if ((argc > 6 && argc < 5) && argError(argv))
		return (1);	// Error in arguments (1)
	createConstStruct(&param, argc - 1, argv);	// Creamos el struct
	setTheTable(&param, &t_data, &forks, &philos);	// Ponemos la mesa(Configuramos los parametros de cada hilo)
	createPhilos(t_data, philos, param.num_philo);
	i = 0;
	while (i < param.num_philo)	// Esperamos a que cada hilo muera
		pthread_join(philos[i++], NULL);
	i = 0;
	while (i < param.num_philo)	// Destruimos todos los mutex
		pthread_mutex_destroy(&forks[i++]);
	free(forks);	// Liberaos memoria alojada
	free(philos);
	free(t_data);
	return (0);
}
