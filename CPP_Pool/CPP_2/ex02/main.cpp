#include "Fixed.hpp"
#include <iostream>

int main(void)
{
	std::cout << " 42 Test:" << std::endl << "\\--------/" << std::endl << std::endl;
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl << std::endl;
	
	std::cout << " My Test:" << std::endl << "\\--------/" << std::endl << std::endl;

	Fixed n1(5);
	Fixed n2(7.5f);

	std::cout << "Comparisons:" << std::endl;
	
	std::string comparisonResult;
	std::cout << n1 << " < " << n2 << ": ";
	comparisonResult = (n1 < n2) ? "True" : "False";
	std::cout << comparisonResult << std::endl;
	
	std::cout << n1 << " > " << n2 << ": ";
	comparisonResult = (n1 > n2) ? "True" : "False";
	std::cout << comparisonResult << std::endl;

	std::cout << n1 << " <= " << n2 << ": ";
	comparisonResult = (n1 <= n2) ? "True" : "False";
	std::cout << comparisonResult << std::endl;

	std::cout << n1 << " >= " << n2 << ": ";
	comparisonResult = (n1 >= n2) ? "True" : "False";
	std::cout << comparisonResult << std::endl;

	std::cout << n1 << " == " << n2 << ": ";
	comparisonResult = (n1 == n2) ? "True" : "False";
	std::cout << comparisonResult << std::endl;

	std::cout << n1 << " != " << n2 << ": ";
	comparisonResult = (n1 != n2) ? "True" : "False";
	std::cout << comparisonResult << std::endl;
	
	std::cout << std::endl << "Arithmetic Operators:" << std::endl;
	
	std::cout << n1 << " + " << n2 << " = " << n1 + n2 << std::endl;
	std::cout << n1 << " - " << n2 << " = " << n1 - n2 << std::endl;
	std::cout << n1 << " * " << n2 << " = " << n1 * n2 << std::endl;
	std::cout << n1 << " / " << n2 << " = " << n1 / n2 << std::endl;

	std::cout << std::endl << "Increment & Decrement:" << std::endl;
	
	std::cout << n1 << "++ => " << n1++ << std::endl;
	std::cout << "++" << n1 << " => " << ++n1 << std::endl;
	std::cout << n2 << "-- => " << n2-- << std::endl;
	std::cout << "--" << n2 << " => " << --n2 << std::endl;

	std::cout << std::endl << "Min & Max:" << std::endl;
	
	std::cout << "min(" << n1 << ", " << n2 << " ) = " << Fixed().min(n1, n2) << std::endl;
	std::cout << "max(" << n1 << ", " << n2 << " ) = " << Fixed().max(n1, n2) << std::endl;;

	Fixed n3(154), zero(0);
	Fixed wut (n3 / zero);
	std::cout << wut <<  std::endl;
	return 0;
}
