/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <socana-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:04:24 by socana-b          #+#    #+#             */
/*   Updated: 2024/05/02 13:04:26 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int value;
	const static int bits = 8;
public:
	Fixed(const int value);
	Fixed(const float value);
	Fixed();
	Fixed(const Fixed& fixed);
	Fixed & operator = (const Fixed& fixed);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
	bool operator > (const Fixed& fixed);
	bool operator < (const Fixed& fixed);
	bool operator >= (const Fixed& fixed);
	bool operator <= (const Fixed& fixed);
	bool operator == (const Fixed& fixed);
	bool operator != (const Fixed& fixed);

	Fixed operator + (const Fixed& fixed);
	Fixed operator - (const Fixed& fixed);
	Fixed operator * (const Fixed& fixed);
	Fixed operator / (const Fixed& fixed);
	
	Fixed & operator ++ ();
	Fixed & operator -- ();
	Fixed operator ++ (int);
	Fixed operator -- (int);

	Fixed static & min(Fixed &p1, Fixed &p2);
	Fixed static & max(Fixed &p1, Fixed &p2);
	const Fixed static & min(const Fixed &p1, const Fixed &p2);
	const Fixed static & max(const Fixed &p1, const Fixed &p2);
};

std::ostream & operator<<(std::ostream & ostream, Fixed const & fixed);

#endif