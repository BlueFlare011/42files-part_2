#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
private:
	const std::string _name;
	int _grade;
public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat & bureaucrat);
	Bureaucrat & operator=(const Bureaucrat & bureaucrat);
	~Bureaucrat();

	const std::string getName(void);
	const int getGrade(void);
	const void incrementGrade();
	const void decrementGrade();
	std::ostream & operator<< (std::ostream & out);

	//Exceptions
};

#endif