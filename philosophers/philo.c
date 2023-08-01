/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <socana-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 09:52:45 by socana-b          #+#    #+#             */
/*   Updated: 2023/08/01 17:26:18 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	c_cleaner(t_const_data	*data, t_thread_data *t_data,
					pthread_mutex_t *forks, pthread_t *philos)
{
	int	i;

	i = 0;
	while (i < data->num_philo)
		pthread_mutex_destroy(&forks[i++]);
	pthread_mutex_destroy(data->w_alive);
	free(forks);
	free(philos);
	free(t_data);
}

int	check_diet(t_const_data *data, t_thread_data *t_data)
{
	int	i;

	i = 0;
	while (i < data->num_philo)
	{
		if (t_data[i].times_eat != data->n_eat)
			return (1);
		i++;
	}
	return (0);
}

void	manage_program(t_const_data *data, t_thread_data *t_data)
{
	int	i;

	while (data->alive && check_diet(data, t_data))
	{
		i = 0;
		while (i < data->num_philo)
		{
			gettimeofday(&data->end, NULL);
			if (get_time(&data->end, &data->init) > (unsigned int)
				(t_data[i].last_meal + data->t_die) && data->alive)
			{
				pthread_mutex_lock(data->w_alive);
				data->alive = 0;
				printf("%ums %d died\n", get_time(&data->end, &data->init),
					t_data[i].id);
				pthread_mutex_unlock(data->w_alive);
			}
			i++;
		}
		usleep(50);
	}
}

void	create_philos(t_const_data *data, t_thread_data *t_data,
						pthread_t *philos)
{
	int	i;

	i = 0;
	while (i < data->num_philo)
	{
		gettimeofday(&data->init, NULL);
		gettimeofday(&data->end, NULL);
		pthread_create(&philos[i], NULL, routine, (void *)&t_data[i]);
		usleep(60);
		i++;
	}
	manage_program(data, t_data);
	i = 0;
	while (i < data->num_philo)
		pthread_join(philos[i++], NULL);
}

int	main(int argc, char **argv)
{
	t_const_data	param;
	t_thread_data	*t_data;
	pthread_mutex_t	*forks;
	pthread_mutex_t	mut_alive;
	pthread_t		*philos;

	if (arg_error(argv, argc))
	{
		write(2, "Error: Los argumentos dados son erroneos\n", 41);
		return (1);
	}
	pthread_mutex_init(&mut_alive, NULL);
	create_const_struct(&param, argc - 1, argv, &mut_alive);
	set_the_table(&param, &t_data, &forks, &philos);
	create_philos(&param, t_data, philos);
	c_cleaner(&param, t_data, forks, philos);
	return (0);
}
