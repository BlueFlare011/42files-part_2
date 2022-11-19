#ifndef PHILO_H
# define PHILO_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <pthread.h>
# include <sys/time.h>
# include <string.h>

typedef struct s_philo
{
	int	n_philo;
	int	id_philo;
	int	t_die;
	int	t_eat;
	int	t_sleep;
	int	n_eat;
}t_philo;


int	ft_atoi(const char *str);
int	check_args(int num, char **args);
#endif