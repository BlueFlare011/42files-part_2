/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <socana-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:03:59 by socana-b          #+#    #+#             */
/*   Updated: 2024/06/01 13:33:50 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

void drawTriangle1()
{
	std::cout << std::endl <<
	"          p3       " << std::endl <<
	"          /\\       " << std::endl <<
	"         /  \\      " << std::endl <<
	"   r*   /    \\     " << std::endl <<
	"       /      \\    " << std::endl <<
	"    p1/________\\p2" << std::endl << std::endl;
}

void drawTriangle2()
{
	std::cout << std::endl <<
	"          p3       " << std::endl <<
	"          /\\       " << std::endl <<
	"         /  \\      " << std::endl <<
	"        /  r*\\     " << std::endl <<
	"       /      \\    " << std::endl <<
	"    p1/________\\p2" << std::endl << std::endl;
}

int main()
{
	Point p1(-30, -30), p2(30, -30), p3(0, 30);
	Point rout(-40, 0), rin(10, 10);

	std::cout << "p1: (-30, -30) p2: (30, -30) p3: (0, 30)" << std::endl;

	drawTriangle1();
	
	std::cout << "El punto r: (-40, 0) esta:" << std::endl;
	if (bsp(p1, p2, p3, rout)){
		std::cout << "Dentro" << std::endl;
	}else{
		std::cout << "Fuera" << std::endl;
	}

	drawTriangle2();

	std::cout << "El punto (10, 10) esta:" << std::endl;
	
	if (bsp(p1, p2, p3, rin)){
		std::cout << "Dentro" << std::endl;
	}else{
		std::cout << "Fuera" << std::endl;
	}

	return (0);
}
