/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 17:42:48 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/25 11:44:37 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(int argc, char const *argv[])
{
 	ClapTrap c1("Juanito");
	ClapTrap c2;
	ClapTrap c3("Marianito");
	ClapTrap c4 = c1;

	std::cout << std::endl;
	c1.takeDamage(50);
	c2.takeDamage(50);
	c3.takeDamage(50);
	c4.takeDamage(50);
	std::cout << std::endl;
	c1.beRepaired(20);
	c2.beRepaired(20);
	c3.beRepaired(20);
	c4.beRepaired(20);
	std::cout << std::endl;
	c1.attack("Skag");
	c2.attack("Rakk");
	c3.attack("Psycho");
	c4.attack("Psycho");
	std::cout << std::endl;
	return 0;
}
