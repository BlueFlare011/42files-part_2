/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <socana-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 11:41:21 by socana-b          #+#    #+#             */
/*   Updated: 2024/10/19 11:41:43 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	Cat & operator= (const Cat & cat);
	~Cat();

	void makeSound() const;

	void learnSomething(std::string idea);
	void forgetSomething();
	void rememberSomething();
};


#endif