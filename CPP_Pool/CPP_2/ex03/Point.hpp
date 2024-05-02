/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <socana-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:02:59 by socana-b          #+#    #+#             */
/*   Updated: 2024/05/02 13:03:00 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
private:
	const Fixed _x;
	const Fixed _y;
	
public:
	Point(const float x, const float y);
	Point();
	Point(const Point & point);
	Point& operator = (const Point & point);
	~Point();
	float	getArea(Point & p1, Point & p2) ;
};

bool bsp(Point &a, Point &b, Point &c, Point & point);

#endif