#include "philo.h"

void	create_struct(int argc, char **args, t_philo *philo)
{
	philo->num_philo = ft_atoi(args[1]);
	philo->time_to_die = ft_atoi(args[2]);
	philo->time_to_eat = ft_atoi(args[3]);
	philo->time_to_sleep = ft_atoi(args[4]);
	if (argc == 6)
		philo->num_philo = ft_atoi(args[5]);
	else
		philo->num_philo = -1;
}

int	main(int argc, char **argv)
{
	t_philo	philo;

	if (argc < 5 && argc > 6)
		return (1);	//Error numero de argumentos
	create_struct(argc, argv, &philo);
	
	return (0);
}
