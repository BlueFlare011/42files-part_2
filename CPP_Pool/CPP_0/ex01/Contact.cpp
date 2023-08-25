#include "Contact.hpp"

Contact::Contact(std::string firstName, std::string lastName, std::string nickname, std::string phoneNumber, std::string darckestSecret)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->nickname = nickname;
	this->phoneNumber = phoneNumber;
	this->darckestSecret = darckestSecret;
	std::cout << "Contact created" << std::endl;
}

Contact::~Contact(void)
{
	std::cout << "Contact deleted" << std::endl;
}