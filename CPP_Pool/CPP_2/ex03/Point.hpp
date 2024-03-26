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
	const Fixed&	getX(void) const;
	const Fixed&	getY(void) const;
	const float	getArea(Point & p1, Point & p2) const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif