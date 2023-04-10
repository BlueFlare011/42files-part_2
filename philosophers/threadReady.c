/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   threadReady.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <socana-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 09:52:42 by socana-b          #+#    #+#             */
/*   Updated: 2023/04/10 12:11:22 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	create_const_struct(t_const_data *data, int length,
								char **args, pthread_mutex_t *mutAlive)
{
	data->num_philo = ft_atoi(args[1]);
	data->t_die = ft_atoi(args[2]);
	data->t_eat = ft_atoi(args[3]);
	data->t_sleep = ft_atoi(args[4]);
	if (length == 5)
		data->n_eat = ft_atoi(args[5]);
	else
		data->n_eat = -1;
	data->alive = 1;
	data->w_alive = mutAlive;
}

void	set_the_table2(t_const_data *param, t_thread_data *t_data,
	pthread_mutex_t *forks)
{
	int	i;

	i = 0;
	while (i < param->num_philo)
		pthread_mutex_init(&forks[i++], NULL);
	i = 0;
	while (i < param->num_philo)
	{
		t_data[i].id = i + 1;
		t_data[i].param = param;
		if (i == param->num_philo - 1)
		{
			t_data[i].left = &forks[0];
			t_data[i].right = &forks[i];
		}
		else
		{
			t_data[i].left = &forks[i + 1];
			t_data[i].right = &forks[i];
		}
		t_data[i].times_eat = 0;
		t_data[i].time_aux = 0;
		t_data[i].last_meal = 0;
		i++;
	}
}

int	set_the_table(t_const_data *param, t_thread_data **t_data,
	pthread_mutex_t **forks, pthread_t **philos)
{
	*t_data = malloc(sizeof(t_thread_data) * param->num_philo);
	if (!*t_data)
		return (1);
	*philos = malloc(sizeof(pthread_t) * param->num_philo);
	if (!*philos)
	{
		free(*t_data);
		return (1);
	}
	*forks = malloc(sizeof(pthread_mutex_t) * param->num_philo);
	if (!*forks)
	{
		free(*t_data);
		free(*philos);
		return (1);
	}
	set_the_table2(param, *t_data, *forks);
	return (0);
}
