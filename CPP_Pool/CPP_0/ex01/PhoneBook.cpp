#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void){}

PhoneBook::~PhoneBook(void){}

void PhoneBook::addContact(int i)
{
	// Mejorar esta mierda
	if (!this->contact[i].createContact()){
		std::cerr << "Contact not registered: Empty field detected" << std::endl;
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
	std::cout << "Introduce index of a contact to see all the information about." << std::endl << "> ";
	std::cin >> index;
	while (!std::cin.good() || (index < 0 || index >= limit)) // Que significa? y es necesario?
	{
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		std::cerr << "Invalid index, try again" << std::endl << "> ";
		std::cin >> index;
	}
	std::cin.ignore(1000, '\n');
	this->contact[index].printContact();
}
