#include "PhoneBook.hpp"

void	printMenu(void)
{
	std::cout << "What do you want:" << std::endl;
	std::cout << "1) Add contact (ADD):" << std::endl;
	std::cout << "2) Search contact (SEARCH)" << std::endl;
	std::cout << "3) Exit (EXIT)" << std::endl << "> ";
}

int main(void)
{
	PhoneBook	agenda;
	std::string	command;
	int			i = 0;

	while (1)
	{
		printMenu();
		std::getline(std::cin, command);
		std::cout << std::endl;
		if (!command.compare("ADD")){
			agenda.addContact(i);
			i++;
		}
		else if (!command.compare("SEARCH"))
			agenda.searchContact(i);
		else if (!command.compare("EXIT"))
			return 0;
	}
	return 0;
}
