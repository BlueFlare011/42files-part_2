#include "philo.h"

int	create_philo_structs(int argc, char **argv, t_philo **philo)
{
	int	i;
	int	num_philo;

	i = 0;
	num_philo = ft_atoi(argv[1]);
	*philo = (t_philo *) malloc(sizeof(t_philo) * num_philo);
	if (!*philo)
	{
		write(1, "Error: Fallo el malloc\n", 23);
		return (0);
	}
	while (i < num_philo)
	{
		philo[i]->n_philo = ft_atoi(argv[1]);
		philo[i]->id_philo = i;
		philo[i]->t_die = ft_atoi(argv[2]);
		philo[i]->t_eat = ft_atoi(argv[3]);
		philo[i]->t_sleep = ft_atoi(argv[4]);
		if (argc == 6)
			philo[i]->n_eat = ft_atoi(argv[5]);
		else
			philo[i]->n_eat = -1;
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	t_philo	*philo;

	if (argc < 5 && argc > 6)
	{
		write(2, "Error: El numero de argumentos es erroneo\n", 42);
		return (1);	//Error numero de argumentos
	}
	if (!check_args(argc, argv))
	{
		write(2, "Error: El contenido de los argumentos es erroneo\n", 50);
		return (2);
	}
	if (!create_philo_structs(argc, argv, &philo))
		return (3);
	
	return (0);
}
