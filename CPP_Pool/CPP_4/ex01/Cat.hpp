#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain * brain;
public:
	Cat();
	Cat(const Cat & cat);
	Cat & operator= (const Cat & animal);
	~Cat();

	void makeSound() const;
	Cat & assign(const Cat & animal);


	void learnSomething(std::string idea);
	void forgetSomething();
	void rememberSomething();
};


#endif