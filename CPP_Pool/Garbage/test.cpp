#include <iostream>

class Book
{

public:
	std::string name;
	int pages;
	Book()
	{
		std::cout << "Book Default Constructor Called" << std::endl;
		this->name = "Algo";
		this->pages = 10;
	}

	~Book()
	{
		std::cout << "Book DestructorCalled" << std::endl;
	}

	void print(){
		std::cout << "Name: " << this->name << std::endl;
		std::cout << "Pag: " << this->pages << std::endl;
	}
};

class Magazine: public Book
{
private:
public:
	
	Magazine()
	{
		std::cout << "Magazine Default Constructor Called" << std::endl;
		this->name = "Revista";
		this->pages = 5;
	}

	~Magazine()
	{
		std::cout << "Magazine DestructorCalled" << std::endl;
	}
};

int main()
{
	Magazine m1;
	Book b1;

	m1.Magazine::print();
	std::cout << "_______________________" << std::endl;
	std::cout << "Name: " << m1.Book::name << std::endl;
	std::cout << "Pag: " << m1.Book::pages << std::endl;
	return 0;
}