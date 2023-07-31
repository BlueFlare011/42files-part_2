/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <socana-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 09:52:55 by socana-b          #+#    #+#             */
/*   Updated: 2023/07/14 17:20:20 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

static int	ft_isdigit(char num)
{
	if ((num >= '0') && (num <= '9'))
		return (1);
	else
		return (0);
}

static long long int	atoi2(const char *str, long long int i)
{
	long long int	n;

	n = 0;
	while (ft_isdigit(str[i]))
	{
		n = (n * 10) + (long long int)str[i] - 48;
		i++;
	}
	return (n);
}

int	ft_atoi(const char *str)
{
	long long int			i;
	long long int			s;
	unsigned long long int	number;

	i = 0;
	s = 1;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
		|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if ((str[i] == '+') || (str[i] == '-'))
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	number = atoi2(str, i);
	if ((number > 9223372036854775807) && (s > 0))
		return (-1);
	else if ((number > 9223372036854775807) && (s < 0))
		return (0);
	return (number * s);
}
