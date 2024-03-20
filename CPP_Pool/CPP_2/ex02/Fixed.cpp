#include "Fixed.hpp"

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = (value << this->bits);
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(value * (1 << 8));
}

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(const Fixed& fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=(const Fixed& fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->value = fixed.value;
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->value;
}

void Fixed::setRawBits(int const raw)
{
	this->value = raw << this->bits;
}

float Fixed::toFloat(void) const
{
	return (this->value / (float)(1 << this->bits));
}

int Fixed::toInt(void) const
{
	return (this->value >> this->bits);
}

Fixed & operator > (const Fixed& p1, const Fixed& p2)
{

}

Fixed & operator < (const Fixed& p1, const Fixed& p2)
{

}

Fixed & operator >= (const Fixed& p1, const Fixed& p2)
{

}

Fixed & operator <= (const Fixed& p1, const Fixed& p2)
{

}

Fixed & operator == (const Fixed& p1, const Fixed& p2)
{

}

Fixed & operator != (const Fixed& p1, const Fixed& p2)
{

}


Fixed & operator + (const Fixed& fixed)
{

}

Fixed & operator - (const Fixed& fixed)
{

}

Fixed & operator * (const Fixed& fixed)
{

}

Fixed & operator / (const Fixed& p1, const Fixed& p2)
{

}


Fixed & operator ++ ()
{

}

Fixed & operator -- ()
{

}

Fixed & operator ++ (int)
{

}

Fixed & operator -- (int)
{

}


Fixed static & min(Fixed &p1, Fixed &p2)
{

}

Fixed static & min(const Fixed &p1, const Fixed  &p2)
{

}

Fixed static & max(Fixed &p1, Fixed &p2)
{

}

Fixed static & max(const Fixed &p1, const Fixed  &p2)
{

}


std::ostream & operator<<(std::ostream & ostream, Fixed const & fixed)
{
	ostream << fixed.toFloat();
	return ostream;
}