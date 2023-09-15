#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "PhoneBook create" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "PhoneBook destroyed" << std::endl;
}

void PhoneBook::addContact(int *i)
{
	if (*i == 8)
		*i = 0;
	if (!this->contact[*i].createContact()){
		std::cerr << "Contact not registered: Empty field detected" << std::endl;
		(*i)--;
	}
}

void	PhoneBook::searchContact(int limit)
{
	int	i = 0;
	int	index;

	if (limit == 0){
		std::cout << "Error: PhoneBook is empty" << std::endl;
		return ;
	}
	std::cout << "     INDEX" << "|" << "FIRST NAME" << "|" << " LAST NAME" << "|" << "  NICKNAME" << std::endl;
	while (i < limit)
	{
		this->contact[i].parseContact(i);
		i++;
	}
	std::cout << "Introduce index of a contact to see all the information abaout" << std::endl << "> ";
	std::cin >> index;
	while (index < 0 || index >= limit)
	{
		std::cerr << "Index is invalid, try again" << std::endl << "> ";
		std::cin >> index;
	}
	this->contact[index].printContact();
}
