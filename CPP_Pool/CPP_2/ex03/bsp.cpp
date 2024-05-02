/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <socana-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:02:46 by socana-b          #+#    #+#             */
/*   Updated: 2024/05/02 13:02:51 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	bsp(Point &a, Point &b, Point &c, Point &point)
{
	float total_area = a.getArea(b, c);
	float area1 = point.getArea(a, b);
	float area2 = point.getArea(b, c);
	float area3 = point.getArea(a, c);

	return (total_area == area1 + area2 + area3);
}
