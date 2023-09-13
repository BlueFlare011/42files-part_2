#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# define MAX_LEN 8

class PhoneBook
{
	public:
		Contact contact[MAX_LEN];
		PhoneBook(void);
		~PhoneBook(void);
		void	addContact(int *i);
		void	searchContact(int limit);
};

#endif