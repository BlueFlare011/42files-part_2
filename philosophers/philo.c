#include "philo.h"

void	testPhilos(t_thread_data *t_data)
{
	for (int i = 0; i < 3; i++)
	{
		write(1, "Pito\n", 5);
		printf("%d - %d", t_data[i].id, t_data[i].param->t_die);
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
	testPhilos(t_data);
	return (0);
}
