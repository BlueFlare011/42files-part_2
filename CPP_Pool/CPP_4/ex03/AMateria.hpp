/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <socana-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 11:42:36 by socana-b          #+#    #+#             */
/*   Updated: 2024/10/19 11:43:22 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class	ICharacter;

class	AMateria
{
	protected:
		std::string type;
	public:
		AMateria(std::string const & type);
		AMateria(void);
		AMateria(AMateria const & amateria);
		AMateria & operator= (AMateria const & amateria);
		virtual ~AMateria(void);

		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif