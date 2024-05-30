#include "Fixed.hpp"
#include <iostream>

int main(void)
{
	std::cout << "42 Test:" << std::endl << "\\-------/" << std::endl << std::endl;
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	
	std::cout << "My Test:" << std::endl << "\\-------/" << std::endl << std::endl;

	Fixed n1(5);
	Fixed n2(7.5f);

	std::cout << "Comparisons:" << std::endl;

	return 0;
}
