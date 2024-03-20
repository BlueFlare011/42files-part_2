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
};

std::ostream & operator<<(std::ostream & ostream, Fixed const & fixed);

#endif