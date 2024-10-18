#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure(std::string const & type);
	Cure(void);
	Cure(Cure const & amateria);
	Cure & operator= (Cure const & amateria);
	~Cure(void);

	AMateria* clone() const;
	void use(ICharacter& target);
	std::string const & getType() const; //Returns the materia type
};

#endif