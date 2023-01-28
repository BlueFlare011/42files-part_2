#include "philo.h"

int	create_philos(t_param *param)
{
	pthread_t		*philos_t;
	t_philo			*philo_s;
	pthread_mutex_t	*mutex;
	int				i;

	i = 0;
	philos_t = malloc(sizeof(pthread_t) * param->n_philo);
	if (!philos_t)
		return (write(2, "Error: Malloc Allocation\n", 25));
	philo_s = malloc(sizeof(t_philo) * param->n_philo);
	if (!philo_s)
	{
		free(philos_t);
		return (write(2, "Error: Malloc Allocation\n", 25));
	}
	mutex = malloc(sizeof(pthread_mutex_t) * param->n_philo);
	if (!mutex)
	{
		free(philos_t);
		free(philo_s);
		return (write(2, "Error: Malloc Allocation\n", 25));
	}
	while (i < param->n_philo)
		pthread_mutex_init(&mutex[i++], NULL);
	i = 0;
	while (i < param->n_philo)
	{
		philo_s[i].id = i + 1;
		philo_s[i].param = param;
		if (i == 0)
		{
			philo_s[i].left = &mutex[0];
			philo_s[i].right = &mutex[param->n_philo - 1];
		}
		else
		{
			philo_s[i].left = &mutex[i];
			philo_s[i].right = &mutex[i - 1];
		}
		pthread_create(&philos_t[i], NULL, &rutine, (void *)&philo_s[i]);	// Estoy multiplicando los mutex por cada struct 
		i++;
	}
	i = 0;
	while (i < param->n_philo)
		pthread_join(philos_t[i++], NULL);
	i = 0;
	while (i < param->n_philo)
		pthread_mutex_destroy(&mutex[i++]);
	free(mutex);
	free(philos_t);
	free(philo_s);
	return (0);
}

int	create_structs(int argc, char **argv, t_param *param)
{
	param->n_philo = ft_atoi(argv[1]);
	param->t_die = ft_atoi(argv[2]);
	param->t_eat = ft_atoi(argv[3]);
	param->t_sleep = ft_atoi(argv[4]);
	if (argc == 6)
		param->n_eat = ft_atoi(argv[5]);
	else
		param->n_eat = -1;
	if (param->n_philo == 0 || param->t_die == 0 || param->t_eat == 0
		|| param->t_sleep == 0 || param->n_eat == 0)
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	t_param	param;

	if (argc < 5 || argc > 6)
	{
		write(2, "Error: El numero de argumentos es erroneo\n", 42);
		return (1);	//Error numero de argumentos
	}
	if (create_structs(argc, argv, &param))
	{
		write(2, "Error: Uno o varios argumentos son erroneos\n", 44);
		return (2);
	}
	create_philos(&param);
	printf("Fin\n");
	return (0);
}
