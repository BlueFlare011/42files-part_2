/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <socana-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:01:19 by socana-b          #+#    #+#             */
/*   Updated: 2024/05/30 15:56:04 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = (value << this->bits);
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(value * 256.0f);
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
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw << this->bits;
}

float Fixed::toFloat(void) const
{
	return (this->value / 256.0f);
}

int Fixed::toInt(void) const
{
	return (this->value >> this->bits);
}

std::ostream & operator<<(std::ostream & ostream, Fixed const & fixed)
{
	ostream << fixed.toFloat();
	return ostream;
}