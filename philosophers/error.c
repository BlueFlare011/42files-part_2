/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <socana-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 09:52:49 by socana-b          #+#    #+#             */
/*   Updated: 2023/04/05 09:53:36 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	arg_error(char **args)
{
	int	i;
	int	aux;

	i = 1;
	while (args[i] && aux)
	{
		aux = ft_atoi(args[i]);
		if (aux >= 0)
			aux = 1;
		else
			aux = 0;
		i++;
	}
	return (!aux);
}
