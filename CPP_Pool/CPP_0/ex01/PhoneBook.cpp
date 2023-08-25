#include "PhoneBook.hpp"

PhoneBook::PhoneBook(Contact contact[MAX_LEN])
{
	std::cout << "PhoneBook create" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "PhoneBook destroyed" << std::endl;
}

void	addContact(void)
{
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	phoneNumber;
	std::string	darckestSecret;

	std::cout << "First Name: ";
	std::cin >> firstName;
	std::cout << "Last Name: ";
	std::cin >> lastName;
	std::cout << "Nickname: ";
	std::cin >> nickname;
	std::cout << "Phone Number: ";
	std::cin >> phoneNumber;
	std::cout << "Secret: ";
	std::cin >> darckestSecret;	
	Contact c_aux(firstName, lastName, nickname, phoneNumber, darckestSecret);
	this->contact[0] = c_aux;
}

void	searchContact(void)
{

}