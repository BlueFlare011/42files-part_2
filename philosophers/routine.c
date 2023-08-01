/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   routine.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <socana-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 09:52:39 by socana-b          #+#    #+#             */
/*   Updated: 2023/08/01 17:21:07 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	sleeping(t_thread_data *data)
{
	smart_print("is sleeping", data);
	while (get_time(&data->param->end, &data->param->init)
		- data->time_aux < (unsigned int)data->param->t_sleep)
	{
		if (!data->param->alive)
			break ;
		usleep(80);
	}
	data->time_aux = get_time(&data->param->end, &data->param->init);
}

void	grab_forks(t_thread_data *data)
{
	if (data->id == 2)
		usleep(80);
	if (data->param->num_philo == 1)
	{
		smart_print("has taken a fork(right)", data);
		while (get_time(&data->param->end, &data->param->init)
			- data->time_aux <= (unsigned int)data->param->t_die)
		{
			if (!data->param->alive)
				break ;
			usleep(80);
		}
		data->time_aux = get_time(&data->param->end, &data->param->init);
		return ;
	}
	pthread_mutex_lock(data->right);
	smart_print("has taken a fork(right)", data);
	pthread_mutex_lock(data->left);
	smart_print("has taken a fork(left)", data);
	data->time_aux = get_time(&data->param->end, &data->param->init);
}

void	eating(t_thread_data *data)
{	
	grab_forks(data);
	smart_print("is eating", data);
	while (get_time(&data->param->end, &data->param->init)
		- data->time_aux < (unsigned int)data->param->t_eat)
	{
		if (!data->param->alive)
			break ;
		usleep(80);
	}
	data->last_meal = get_time(&data->param->end, &data->param->init);
	data->time_aux = get_time(&data->param->end, &data->param->init);
	pthread_mutex_unlock(data->right);
	pthread_mutex_unlock(data->left);
}

void	*routine(void	*param)
{
	t_thread_data	*data;

	data = param;
	while (data->param->alive)
	{
		eating(data);
		data->times_eat++;
		if (data->times_eat == data->param->n_eat && data->param->alive)
		{
			smart_print("finished", data);
			break ;
		}
		sleeping(data);
		smart_print("is thinking", data);
	}
	return (NULL);
}
