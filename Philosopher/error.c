#include "philo.c"

int	check_args(int num, char **args)
{
	int	n_philo;
	int	t_die;
	int	t_eat;
	int	t_sleep;
	int	n_eat;

	n_philo = ft_atoi(args[1]);
	t_die = ft_atoi(args[2]);
	t_eat = ft_atoi(args[3]);
	t_sleep = ft_atoi(args[4]);
	if (num == 6)
		n_eat = ft_atoi(args[5]);
	if (n_philo <= 0 || t_die <= 0 || t_eat <= 0 || t_sleep <= 0)
		return (0);
	if (num == 6 && n_eat <= 0)
		return (0);
	n_eat = -1;
	return (1);
}
