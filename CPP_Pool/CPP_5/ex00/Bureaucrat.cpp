#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Bureaucrat Default Constructor Called" << std::endl; 
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade)
{
	std::cout << "Bureaucrat Constructor Called" << std::endl;
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

const std::string Bureaucrat::getName(void)
{
	return (this->_name);
}

const int Bureaucrat::getGrade(void)
{
	return (this->_grade);
}

const void Bureaucrat::incrementGrade()
{
	this->_grade--;
}

const void Bureaucrat::decrementGrade()
{
	this->_grade++;
}

std::ostream & Bureaucrat::operator<< (std::ostream & out)
{
	out << this->_name;
	out << ", bureaucrat grade ";
	out << this->_grade << std::endl;
	return (out);
}