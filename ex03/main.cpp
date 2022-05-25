/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 17:42:48 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/25 13:26:00 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

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
	std::cout << "\nFragTrap\n--------\n";
	{
		FragTrap f1("Julie");
		FragTrap f2;
		FragTrap f3("Loles");
		FragTrap f4 = f1;
		std::cout << std::endl;
		f1.takeDamage(20);
		f2.takeDamage(20);
		f3.takeDamage(20);
		f4.takeDamage(20);
		std::cout << std::endl;
		f1.beRepaired(70);
		f2.beRepaired(70);
		f3.beRepaired(70);
		f4.beRepaired(70);
		std::cout << std::endl;
		f1.attack("Skag");
		f2.attack("Rakk");
		f3.attack("Psycho");
		f4.attack("ClapTrap");
		std::cout << std::endl;
		f1.highFivesGuys();
		f2.highFivesGuys();
		f3.highFivesGuys();
		f4.highFivesGuys();
		std::cout << std::endl;
	}
	return 0;
}
