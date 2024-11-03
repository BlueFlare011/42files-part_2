#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat b1 = Bureaucrat("Antonio", 40);
		Bureaucrat b2 = Bureaucrat("Carmen", 149);
		Bureaucrat b3 = Bureaucrat("Jesus", 1);
		//Bureaucrat b4 = Bureaucrat("Marisa", -67);

		std::cout << std::endl << b1 << std::endl;
		std::cout << b2 << std::endl;
		std::cout << b3 << std::endl << std::endl;
		//std::cout << b4 << std::endl;

		b2.decrementGrade();
		//b2.decrementGrade();
		//b3.incrementGrade();
	}
	catch(Bureaucrat::GradeTooHighException& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
