#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
	int bits = 8;

	int value = 42.42 * (1 << bits);
	int value2 = roundf(value);
	std::cout << value << " " << value2 << std::endl;
	
	std::cout << value2 / (float )(1 << bits) << std::endl;

	return 0;
}
