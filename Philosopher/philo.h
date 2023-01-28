#ifndef PHILO_H
# define PHILO_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <pthread.h>
# include <sys/time.h>
# include <string.h>

typedef struct s_param
{
	int				n_philo;
	int				t_die;
	int				t_eat;
	int				t_sleep;
	int				n_eat;
	pthread_mutex_t	*forks;
}t_param;

typedef struct s_philo
{
	int				id;
	struct s_param	*param;
}t_philo;


int	ft_atoi(const char *str);
void	*rutine(void *aux_struct);
#endif