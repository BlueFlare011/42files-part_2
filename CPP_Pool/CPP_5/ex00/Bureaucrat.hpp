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

	std::string getName(void);
	int getGrade(void);
	void incrementGrade();
	void decrementGrade();

	//Exceptions
	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char * what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char * what() const throw();
	};	
	
};

std::ostream & operator<< (std::ostream & out, Bureaucrat & bureaucrat);


#endif