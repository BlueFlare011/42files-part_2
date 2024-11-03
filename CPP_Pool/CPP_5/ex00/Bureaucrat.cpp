#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("unnamed"), _grade(75)
{
	std::cout << "Bureaucrat Default Constructor Called" << std::endl; 
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade)
{
	std::cout << "Bureaucrat Constructor Called" << std::endl;
	if (this->_grade > 150)
		throw GradeTooLowException();
	if (this->_grade < 1)
		throw GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat & bureaucrat)
{
	std::cout << "Bureaucrat Copy Constructor Called" << std::endl; 
	*this = bureaucrat;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat & bureaucrat)
{
	std::cout << "Bureaucrat Copy Assinngment Constructor Called" << std::endl;
	this->_grade = bureaucrat._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor Called" << std::endl; 
}

std::string Bureaucrat::getName(void)
{
	return (this->_name);
}

int Bureaucrat::getGrade(void)
{
	return (this->_grade);
}

void Bureaucrat::incrementGrade()
{
	if (this->_grade == 1)
		throw (GradeTooHighException());
	this->_grade--;
}

void Bureaucrat::decrementGrade()
{
	if (this->_grade == 150)
		throw (GradeTooLowException());
	this->_grade++;
}

std::ostream & operator<< (std::ostream & out, Bureaucrat & bureaucrat)
{
	out << bureaucrat.getName();
	out << ", bureaucrat grade ";
	out << bureaucrat.getGrade();
	return (out);
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Error: Bureaucrat grade is too high");
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Error: Bureaucrat grade is too low");
}