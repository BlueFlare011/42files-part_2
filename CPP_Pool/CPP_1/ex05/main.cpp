# include "Harl.hpp"

int main()
{
	Harl harl = Harl();
	
	std::cout << "Debug message:" << std::endl;
	harl.complain("DEBUG");
	std::cout << "Info message:" << std::endl;
	harl.complain("INFO");
	std::cout << "Warning message:" << std::endl;
	harl.complain("WARNING");
	std::cout << "Error message:" << std::endl;
	harl.complain("ERROR");
	std::cout << "Others..." << std::endl;
	harl.complain("");
	harl.complain("algo");
	return 0;
}