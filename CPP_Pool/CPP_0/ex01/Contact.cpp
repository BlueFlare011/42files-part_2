#include "Contact.hpp"

Contact::Contact(void)
{
	std::cout << "Contact created" << std::endl;
}

Contact::~Contact(void)
{
	std::cout << "Contact deleted" << std::endl;
}

bool	Contact::createContact(void)
{
	std::cout << "Introduce First Name:" << std::endl;
	std::cin >> this->firstName;
	if (this->firstName.empty())
		return false;
	std::cout << "Introduce Last Name:" << std::endl;
	std::cin >> this->lastName;
	if (this->lastName.empty())
		return false;
	std::cout << "Introduce Nickname:" << std::endl;
	std::cin >> this->nickname;
	if (this->nickname.empty())
		return false;
	std::cout << "Introduce Phone Number:" << std::endl;
	std::cin >> this->phoneNumber;
	if (this->phoneNumber.empty())
		return false;
	std::cout << "Introduce a dark secret:" << std::endl;
	std::cin >> this->darkestSecret;
	if (this->darkestSecret.empty())
		return false;
	return true;
}

void	Contact::parseContact(int i)
{
	std::string	index;
	std::string	fname;
	std::string	lname;
	std::string	nick;

	index = "         " + std::to_string(i);
	// to-do
}

void	Contact::printContact(void)
{
	std::cout << "First Name: " << this->firstName << std::endl;
	std::cout << "Last Name: " << this->lastName << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phone Number: " << this->phoneNumber << std::endl;
	std::cout << "Darkest Secret: " << this->darkestSecret << std::endl;
}