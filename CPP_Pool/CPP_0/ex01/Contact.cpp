#include "Contact.hpp"

Contact::Contact(void){}

Contact::~Contact(void){}

std::string	repeatString(char letter, int length)
{
	std::string result = "";
	int			i = 0;

	while (i < length){
		result.push_back(letter);
		i++;
	}
	return (result);
}

bool	Contact::createContact(void)
{
	std::cout << "Introduce First Name:" << std::endl;
	std::getline(std::cin, this->firstName);
	if (this->firstName.empty())
		return false;
	std::cout << "Introduce Last Name:" << std::endl;
	std::getline(std::cin, this->lastName);
	if (this->lastName.empty())
		return false;
	std::cout << "Introduce Nickname:" << std::endl;
	std::getline(std::cin, this->nickname);
	if (this->nickname.empty())
		return false;
	std::cout << "Introduce Phone Number:" << std::endl;
	std::getline(std::cin, this->phoneNumber);
	if (this->phoneNumber.empty())
		return false;
	std::cout << "Introduce a dark secret:" << std::endl;
	std::getline(std::cin, this->darkestSecret);
	if (this->darkestSecret.empty())
		return false;
	std::cout << "Contact added successfully" << std::endl;
	return true;
}

void	Contact::parseContact(int i)
{
	std::string	index;
	std::string	fname;
	std::string	lname;
	std::string	nick;
	size_t		length;

	index = "         " + std::to_string(i);
	length = this->firstName.length();
	if (length > 10){

		fname = this->firstName.substr(0, 10);
		fname[9] = '.';
	}else{
		fname = repeatString(' ', 10 - length);
		fname.append(this->firstName);
	}
	length = this->lastName.length();
	if (length > 10){

		lname = this->lastName.substr(0, 10);
		lname[9] = '.';
	}else{
		lname = repeatString(' ', 10 - length);
		lname.append(this->lastName);
	}
	length = this->nickname.length();
	if (length > 10){

		nick = this->nickname.substr(0, 10);
		nick[9] = '.';
	}else{
		nick = repeatString(' ', 10 - length);
		nick.append(this->nickname);
	}
	std::cout << index << "|" << fname << "|" << lname << "|" << nick << std::endl;
}

void	Contact::printContact(void)
{
	std::cout << "First Name: " << this->firstName << std::endl;
	std::cout << "Last Name: " << this->lastName << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phone Number: " << this->phoneNumber << std::endl;
	std::cout << "Darkest Secret: " << this->darkestSecret << std::endl << std::endl;
}