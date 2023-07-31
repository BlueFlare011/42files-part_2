/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <socana-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 09:52:52 by socana-b          #+#    #+#             */
/*   Updated: 2023/07/14 17:20:35 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

unsigned int	get_time(struct timeval *end, struct timeval *init)
{
	return ((end->tv_sec * 1000 + end->tv_usec / 1000)
		- (init->tv_sec * 1000 + init->tv_usec / 1000));
}

void	smart_print(char *message, t_thread_data *data)
{
	pthread_mutex_lock(data->param->w_alive);
	if (data->param->alive)
		printf("%ums %d %s\n", get_time(&data->param->end,
				&data->param->init), data->id, message);
	pthread_mutex_unlock(data->param->w_alive);
}
