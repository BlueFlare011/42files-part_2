/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <socana-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:03:49 by socana-b          #+#    #+#             */
/*   Updated: 2024/06/01 13:35:56 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(const float x, const float y) : _x(Fixed(x)), _y(Fixed(y)) {}

Point::Point() {}

Point::Point(const Point& point): _x(point._x), _y(point._y) {}

Point& Point::operator = (const Point& point)
{
	std::cout << "Assignment Operator can't be used with constant attributes" << std::endl;
	return (*this);
}

Point::~Point() {}

float Point::getArea(Point & p1, Point & p2) 
{
	float x1, y1, x2, y2, x3, y3;

	x1 = this->_x.toFloat();
	y1 = this->_y.toFloat();
	x2 = p1._x.toFloat();
	y2 = p1._y.toFloat();
	x3 = p2._x.toFloat();
	y3 = p2._y.toFloat();


	return (abs(x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0);
}

void Point::toString()
{
	std::cout << "X: " << this->_x << std::endl << "Y: " << this->_y << std::endl;
}