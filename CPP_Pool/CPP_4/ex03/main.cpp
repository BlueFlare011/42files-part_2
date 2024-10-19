/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <socana-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 11:42:57 by socana-b          #+#    #+#             */
/*   Updated: 2024/10/19 12:45:26 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	std::cout << tmp->getType() << std::endl;
	me->equip(tmp);
	tmp = src->createMateria("cure");
	std::cout << tmp->getType() << std::endl;
	me->equip(tmp);
	
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	// Extra Test
	me->use(2, *bob);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	me->use(2, *bob);
	me->unequip(0);
	me->unequip(0);
	me->unequip(0);
	me->use(0, *bob);

	delete src;
	delete me;
	delete bob;
	return (0);
}
