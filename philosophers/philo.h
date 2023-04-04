#ifndef PHILO_H
# define PHILO_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/time.h>
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

	//Mutex proceso principal
	pthread_mutex_t	*w_alive;
	
	struct timeval init;
	struct timeval end;
}t_const_data;

typedef struct s_thread_data	// Parametros que tendra cada thread;
{
	int	id;	//Philo id
	t_const_data	*param;	// Pointer to struct
	//Forks
	pthread_mutex_t	*left;
	pthread_mutex_t	*right;
	// Numero de veces que ha comido cada filosofo (si se especifica el 5º argumento)
	int	times_eat;
	// Struct Timeval
	
	// Temporizadores de actividad
	unsigned int	last_meal;
	unsigned int	time_aux;
}t_thread_data;

int		ft_atoi(const char *str);
int		argError(char **args);
void	createConstStruct(t_const_data *data, int length, char **args, pthread_mutex_t *mutPrint);
int		setTheTable(t_const_data *param, t_thread_data **t_data, pthread_mutex_t **forks, pthread_t **philos);
void	*routine(void	*param);
unsigned int getTime(struct timeval *end, struct timeval *init);
unsigned int getSimpleTime(struct timeval *end, struct timeval *init);
void	smartPrint(char *message, t_thread_data *data);

#endif