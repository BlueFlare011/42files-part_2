#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int point;
	const static int bits = 8;
public:
	Fixed(int point);
	Fixed(float point);
	Fixed();
	Fixed(const Fixed& fixed);
	Fixed & operator = (const Fixed& fixed);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat( void ) const;
	int toInt( void ) const;
};

#endif