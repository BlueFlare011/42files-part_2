#ifndef PHILO_H
# define PHILO_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <pthread.h>

typedef struct s_const_data	//Struct con los argumentos y otras constantes definidos
{
	//Argumentos
	int	num_philo;
	int	t_die;
	int	t_eat;
	int	t_sleep;
	int	n_eat;

	//Otras variables
	int	alive;

}t_const_data;

typedef struct s_thread_data	// Parametros que tendra cada thread;
{
	int	id;	//Philo id
	t_const_data	*param;	// Pointer to struct
	//Forks
	pthread_mutex_t	*left;
	pthread_mutex_t	*right;
}t_thread_data;

int	ft_atoi(const char *str);

#endif