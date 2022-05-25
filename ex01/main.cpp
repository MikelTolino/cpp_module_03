/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 17:42:48 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/25 12:21:07 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(int argc, char const *argv[])
{
	std::cout << "\nClapTrap\n--------\n";
	{
		ClapTrap c1("Juanito");
		ClapTrap c2;
		ClapTrap c3("Marianito");
		ClapTrap c4 = c1;

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
	}
	std::cout << "\nScavTrap\n--------\n";
	{
		ScavTrap s1("Lucia");
		ScavTrap s2;
		ScavTrap s3("María");
		ScavTrap s4 = s1;

		std::cout << std::endl;
		s1.takeDamage(10);
		s2.takeDamage(10);
		s3.takeDamage(10);
		s4.takeDamage(10);
		std::cout << std::endl;
		s1.beRepaired(40);
		s2.beRepaired(40);
		s3.beRepaired(40);
		s4.beRepaired(40);
		std::cout << std::endl;
		s1.attack("Skag");
		s2.attack("Rakk");
		s3.attack("Psycho");
		s4.attack("ClapTrap");
		std::cout << std::endl;
		s1.guardGate();
		s2.guardGate();
		s3.guardGate();
		s4.guardGate();
		std::cout << std::endl;
	}
	return 0;
}
