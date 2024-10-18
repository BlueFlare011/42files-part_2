#include "Cure.hpp"

Cure::Cure(std::string const & type) : AMateria(type)
{
	std::cout << "Cure Constructor Called" << std::endl;
}

Cure::Cure(void)
{
	std::cout << "Cure Default Constructor Called" << std::endl;
	this->type = "cure";
}

Cure::Cure(Cure const & cure) : AMateria(cure)
{
	std::cout << "Cure Copy Constructor Called" << std::endl;
}

Cure & Cure::operator= (Cure const & cure)
{
	std::cout << "Cure Copy Assingment Constructor Called" << std::endl;
	AMateria::operator=(cure);
	return (*this);
}

Cure::~Cure(void)
{
	std::cout << "Cure Destructor Called" << std::endl;
}

std::string const & Cure::getType() const 
{
	return (AMateria::getType());
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals "<< target.getName() << "'s wounds *" << std::endl;
}

AMateria* Cure::clone() const
{
	AMateria * aux = new Cure(*this);
	return(aux);
}