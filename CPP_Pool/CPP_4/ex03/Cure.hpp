/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <socana-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 11:42:45 by socana-b          #+#    #+#             */
/*   Updated: 2024/10/19 11:43:19 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure(std::string const & type);
	Cure(void);
	Cure(Cure const & amateria);
	Cure & operator= (Cure const & amateria);
	~Cure(void);

	AMateria* clone() const;
	void use(ICharacter& target);
	std::string const & getType() const; //Returns the materia type
};

#endif