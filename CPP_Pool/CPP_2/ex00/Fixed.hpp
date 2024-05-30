/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <socana-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:00:54 by socana-b          #+#    #+#             */
/*   Updated: 2024/05/30 16:00:17 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int value;
	const static int bits = 8;
public:
	Fixed();
	Fixed(const Fixed& fixed);
	Fixed & operator = (const Fixed& fixed);
	~Fixed();

	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif