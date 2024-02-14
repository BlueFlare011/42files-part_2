#include "Fixed.hpp"

Fixed::Fixed(int point)
{

}

Fixed::Fixed(float point)
{
	
}

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->point;
}

void Fixed::setRawBits(int const raw)
{
	this->point = raw;
}

float Fixed::toFloat(void) const
{

}

int Fixed::toInt(void) const
{

}
