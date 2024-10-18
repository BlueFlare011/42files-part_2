#include "Character.hpp"

Character::Character(void) : name("-"), index(0)
{
	std::cout << "Character Default Constructor Called" << std::endl;
}

Character::Character(std::string name) : name(name), index(0)
{
	std::cout << "Character Constructor Called" << std::endl;
}

Character::Character(Character & character)
{
	std::cout << "Character Copy Constructor Called" << std::endl;
	*this = character;
}

Character & Character::operator= (Character & character)
{
	std::cout << "Character Copy Assingment Constructor Called" << std::endl;
	this->name = character.name;
	this->index = character.index;
	for (int i = 0; i < MAX_SLOTS; i++)
		this->slots[i] = character.slots[i]; // To check
	return (*this);
}

Character::~Character()
{
	std::cout << "Character Destructor Called" << std::endl;
}

std::string const & Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria* m)
{
	if (this->index < MAX_SLOTS){
		this->slots[this->index] = m;
		this->index++;
	}
}

void Character::unequip(int idx)
{
	if (this->index > 0 && (idx >= 0 || idx < this->index)){
		for (int i = idx; i < this->index; i++){
			if (i < MAX_SLOTS)
				this->slots[i] = this->slots[i + 1];
			else
				this->slots[i] = NULL;
		}
		this->index--;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 || idx < this->index){
		this->slots[idx]->use(target);
	}
}
