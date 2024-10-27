/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <socana-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 11:41:55 by socana-b          #+#    #+#             */
/*   Updated: 2024/10/19 11:42:20 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() : index(0)
{
	std::cout << "Brain Default Constructor Called" << std::endl;
}

Brain::Brain(const Brain & brain)
{
	std::cout << "Brain Copy Constructor Called" << std::endl;
	*this = brain;
}

Brain & Brain::operator= (const Brain & brain)
{
	std::cout << "Brain Copy Assingment Constructor Called" << std::endl;
	this->index = brain.index;
	for (int i = 0; i < this->index; i++)
		this->ideas[i] = brain.ideas[i];		
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain Destructor Called" << std::endl;	
}

void	Brain::learn(std::string cell)
{
	if (this->index < 100){
		this->ideas[this->index] = cell;
		this->index++;
	}else
		std::cout << "Error: Brain Full, please forget unnecesary information... like breath :)" << std::endl; 
}

void	Brain::forget()
{
	if (this->index > 0)
		this->index--;
	else
		std::cout << "Error: Brain alredy empty, please learn something interesting... like play LoL :)" << std::endl; 
}

void	Brain::remember()
{
	for (int i = 0; i < this->index; i++)
		std::cout << this->ideas[i] << std::endl;
}
