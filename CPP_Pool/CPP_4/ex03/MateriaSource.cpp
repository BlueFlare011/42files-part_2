#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource Default Constructor Called" << std::endl;
	this->index = 0;
}

MateriaSource::MateriaSource(MateriaSource & materia)
{
	std::cout << "MateriaSource Copy Constructor Called" << std::endl;
	*this = materia;
}

MateriaSource & MateriaSource::operator= (MateriaSource & materia)
{
	std::cout << "MateriaSource Copy Assingment Constructor Called" << std::endl;
	this->index = materia.index;
	return *this;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource Destructor Called" << std::endl;
	delete *this->slots;
}

void MateriaSource::learnMateria(AMateria* materia)
{
	if (this->index < MAX_SLOTS){
		this->slots[this->index] = materia;
		this->index++;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int i = 0;
	while (this->slots[i]->getType() != type && i < this->index)
		i++;
	if (i >= this->index)
		return (0);
	return (this->slots[i]);
}
