#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void){
	this->limit = 0;
	this->index = 0;
}

PhoneBook::~PhoneBook(void){}

void PhoneBook::addContact(void)
{
	if (!this->contact[this->index % this->MAX_LEN].createContact()){
		std::cerr << "Contact not registered: Empty field detected" << std::endl;
	}else{
		if (this->limit < this->MAX_LEN)
			this->limit++;
		this->index++;
	}
}

void	PhoneBook::searchContact(void)
{
	int	i = 0;
	int	index;

	if (this->limit == 0){
		std::cout << "Error: PhoneBook is empty" << std::endl;
		return ;
	}
	std::cout << "     INDEX" << "|" << "FIRST NAME" << "|" << " LAST NAME" << "|" << "  NICKNAME" << std::endl;
	while (i < this->limit)
	{
		this->contact[i].parseContact(i);
		i++;
	}
	std::cout << "Introduce index of a contact to see all the information about." << std::endl << "> ";
	std::cin >> index;
	while ((!std::cin.good() || (index < 0 || index >= this->limit)) && !std::cin.eof())
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cerr << "Invalid index, try again" << std::endl << "> ";
		std::cin >> index;
	}
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	if (!std::cin.eof())
		this->contact[index].printContact();
}
