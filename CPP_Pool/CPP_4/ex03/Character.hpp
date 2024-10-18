#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		const static int MAX_SLOTS = 4;
		std::string name;
		AMateria * slots[MAX_SLOTS];
		int index;
	public:
		Character(void);
		Character(std::string name);
		Character(Character & character);
		Character & operator= (Character & character);
		~Character();
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif