#include "Point.hpp"

Point::Point(const float x, const float y) : _x(Fixed(x)), _y(Fixed(y))
{}

Point::Point()
{
	std::cout << "(Point) Default constructor" << std::endl;
}

Point::Point(const Point& point)
{
	std::cout << "(Point) Copy constructor" << std::endl;
	*this = point;
}

Point& Point::operator = (const Point& point)
{
	std::cout << "(Point) Copy assignment constructor" << std::endl;
	// this->_x = point._x;
	// this->_y = point._y;
	return (*this);
}

Point::~Point()
{
	std::cout << "(Point) Destructor constructor" << std::endl;
}