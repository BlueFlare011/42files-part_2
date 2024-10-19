/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <socana-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 11:42:07 by socana-b          #+#    #+#             */
/*   Updated: 2024/10/19 11:42:15 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain * brain;
public:
	Dog();
	Dog(const Dog & dog);
	Dog & operator= (const Dog & dog);
	~Dog();

	void makeSound() const;

	void learnSomething(std::string idea);
	void forgetSomething();
	void rememberSomething();
};


#endif