/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <socana-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:04:30 by socana-b          #+#    #+#             */
/*   Updated: 2024/05/02 13:04:31 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(const int value)
{
	this->value = (value << this->bits);
}

Fixed::Fixed(const float value)
{
	this->value = roundf(value * 256.0f);
}

Fixed::Fixed()
{
	this->value = 0;
}

Fixed::Fixed(const Fixed& fixed)
{

	*this = fixed;
}

Fixed::~Fixed() {}

Fixed&	Fixed::operator=(const Fixed& fixed)
{
	this->value = fixed.value;
	return (*this);
}

int Fixed::getRawBits(void) const
{
	return this->value;
}

void Fixed::setRawBits(int const raw)
{
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

bool Fixed::operator > (const Fixed& fixed)
{
	return this->value > fixed.value;
}

bool Fixed::operator < (const Fixed& fixed)
{
	return this->value < fixed.value;
}

bool Fixed::operator >= (const Fixed& fixed)
{
	return this->value >= fixed.value;
}

bool Fixed::operator <= (const Fixed& fixed)
{
	return this->value <= fixed.value;
}

bool Fixed::operator == (const Fixed& fixed)
{
	return this->value == fixed.value;
}

bool Fixed::operator != (const Fixed& fixed)
{
	return this->value != fixed.value;
}


Fixed Fixed::operator + (const Fixed& fixed)
{
	return (Fixed(this->toFloat() + fixed.toFloat()));
}

Fixed Fixed::operator - (const Fixed& fixed)
{
	return (Fixed(this->toFloat() - fixed.toFloat()));
}

Fixed  Fixed::operator * (const Fixed& fixed)
{
	return (Fixed(this->toFloat() * fixed.toFloat()));
}

Fixed Fixed::operator / (const Fixed& fixed)
{
	return (Fixed(this->toFloat() / fixed.toFloat()));
}


Fixed & Fixed::operator ++ ()
{
	this->value++;
	return (*this);
}

Fixed & Fixed::operator -- ()
{
	this->value--;
	return (*this);
}

Fixed Fixed::operator ++ (int)
{
	Fixed old = *this;
	operator++();
	return (old);
}

Fixed Fixed::operator -- (int)
{
	Fixed old = *this;
	operator--();
	return (old);
}

Fixed & Fixed::min(Fixed &p1, Fixed &p2)
{
	if (p1.value < p2.value)
		return p1;
	return p2;
}

Fixed & Fixed::max(Fixed &p1, Fixed &p2)
{
	if (p1.value > p2.value)
		return p1;
	return p2;
}

const Fixed & Fixed::min(const Fixed &p1, const Fixed  &p2)
{
	if (p1.value < p2.value)
		return p1;
	return p2;
}

const Fixed & Fixed::max(const Fixed &p1, const Fixed  &p2)
{
	if (p1.value > p2.value)
		return p1;
	return p2;
}

std::ostream & operator<<(std::ostream & ostream, Fixed const & fixed)
{
	ostream << fixed.toFloat();
	return ostream;
}