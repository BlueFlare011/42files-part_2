#include "philo.h"

void manageProgram(t_thread_data *t_data)
{
	int	i;

	i = 0;
	usleep(100);
	while (1)
	{
		while (i < t_data->param->num_philo)
		{
			if (t_data->param->last_meal[i] ) // No se como plantealo
			i++;	
		}
	}
}

void	createPhilos(t_thread_data *t_data, pthread_t *philos, int	n_philos)
{
	int	i;

	i = 0;
	while (i < n_philos)
	{
		pthread_create(&philos[i], NULL, routine, (void *)&t_data[i]);
		usleep(50);
		i++;
	}
	manageProgram(t_data);	// Controlador de los philos desde el exterior
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
	pthread_mutex_destroy(t_data->param->w_print);
}

int main(int argc, char **argv)
{
	t_const_data	param;
	t_thread_data	*t_data;
	pthread_mutex_t	*forks;
	pthread_mutex_t	mutPrint;
	pthread_t		*philos;
	int				i;

	if ((argc > 6 && argc < 5) && argError(argv))
		return (1);	// Error in arguments (1)
	pthread_mutex_init(&mutPrint, NULL); // El mutex se tiene que inicializar y pasar a la struct para que no de sigsev
	createConstStruct(&param, argc - 1, argv, &mutPrint);	// Creamos el struct
	setTheTable(&param, &t_data, &forks, &philos);	// Ponemos la mesa(Configuramos los parametros de cada hilo)
	createPhilos(t_data, philos, param.num_philo);
	i = 0;
	while (i < param.num_philo)	// Esperamos a que cada hilo muera
		pthread_join(philos[i++], NULL);
	i = 0;
	while (i < param.num_philo)	// Destruimos todos los mutex
		pthread_mutex_destroy(&forks[i++]);
	pthread_mutex_destroy(param.w_print);
	free(forks);	// Liberaos memoria alojada
	free(param.last_meal);
	free(philos);
	free(t_data);
	return (0);
}
