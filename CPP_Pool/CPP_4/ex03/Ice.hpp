/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <socana-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 11:42:50 by socana-b          #+#    #+#             */
/*   Updated: 2024/10/19 11:43:17 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice(std::string const & type);
	Ice(void);
	Ice(Ice const & amateria);
	Ice & operator= (Ice const & amateria);
	~Ice(void);

	AMateria* clone() const;
	void use(ICharacter& target);
	std::string const & getType() const; //Returns the materia type
};

#endif