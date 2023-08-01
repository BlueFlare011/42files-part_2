/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <socana-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 09:52:30 by socana-b          #+#    #+#             */
/*   Updated: 2023/08/01 17:21:12 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/time.h>
# include <pthread.h>

typedef struct s_const_data
{
	int				num_philo;
	int				t_die;
	int				t_eat;
	int				t_sleep;
	int				n_eat;
	int				alive;
	pthread_mutex_t	*w_alive;
	struct timeval	init;
	struct timeval	end;
}t_const_data;

typedef struct s_thread_data
{
	int				id;
	t_const_data	*param;
	pthread_mutex_t	*left;
	pthread_mutex_t	*right;
	int				times_eat;
	unsigned int	last_meal;
	unsigned int	time_aux;
}t_thread_data;

int				ft_atoi(const char *str);
int				arg_error(char **args, int argc);
void			create_const_struct(t_const_data *data,
					int length, char **args, pthread_mutex_t *mutPrint);
int				set_the_table(t_const_data *param, t_thread_data **t_data,
					pthread_mutex_t **forks, pthread_t **philos);
void			*routine(void	*param);
unsigned int	get_time(struct timeval *end, struct timeval *init);
void			smart_print(char *message, t_thread_data *data);

#endif