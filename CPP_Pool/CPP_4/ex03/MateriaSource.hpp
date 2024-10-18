#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		const static int MAX_SLOTS = 4;
		AMateria * slots[MAX_SLOTS];
		int index;
	public:
		MateriaSource();
		MateriaSource(MateriaSource & materia);
		MateriaSource & operator= (MateriaSource & materia);
		virtual ~MateriaSource();

		virtual void learnMateria(AMateria* materia);
		virtual AMateria* createMateria(std::string const & type);
};

#endif