#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		//construct
	}
	catch(const std::GradeTooHighException& e)
	{
		std::cerr << e.what() << '\n';
	}
	catch(const std::GradeTooLowException& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}