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
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif