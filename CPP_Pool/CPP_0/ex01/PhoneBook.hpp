#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# define MAX_LEN 8

class PhoneBook
{
	private:
		Contact contact[MAX_LEN];
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	addContact(int i);
		void	searchContact(int limit);
};

#endif