/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <socana-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:02:59 by socana-b          #+#    #+#             */
/*   Updated: 2024/06/01 13:34:16 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
private:
	Fixed const _x;
	Fixed const _y;
	
public:
	Point(const float x, const float y);
	Point();
	Point(const Point & point);
	Point& operator = (const Point & point);
	~Point();
	float	getArea(Point & p1, Point & p2);
	void toString();
};

bool bsp(Point &a, Point &b, Point &c, Point & point);


#endif