#include "philo.h"

void	testPhilos(t_thread_data *t_data, t_const_data *param)
{
	for (int i = 0; i < 3; i++)
	{
		printf("%d - %d\n", t_data[i].id, t_data[i].param->t_die);
	}
	param->t_die = 300;
	for (int i = 0; i < 3; i++)
	{
		printf("%d - %d\n", t_data[i].id, t_data[i].param->t_die);
	}
}

void	createPhilos(t_thread_data *t_data, pthread_t *philos, int	n_philos)
{
	int	i;

	i = 0;
	while (i < n_philos)
	{
		pthread_create(&philos[i], NULL, rutine, (void *)&t_data[i]);
		i++;
	}
	
}

int main(int argc, char **argv)
{
	t_const_data	param;
	t_thread_data	*t_data;
	pthread_mutex_t	*forks;
	pthread_t		*philos;

	if ((argc > 6 && argc < 5) && argError(argv))
		return (1);	// Error in arguments (1)
	createConstStruct(&param, argc - 1, argv);	// Creamos el struct
	setTheTable(&param, &t_data, &forks, &philos);	// Ponemos la mesa(Configuramos los parametros de cada hilo)
	createPhilos(t_data, philos, param.num_philo);
	return (0);
}
