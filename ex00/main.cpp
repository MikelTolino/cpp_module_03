/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 17:42:48 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/03 19:04:55 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(int argc, char const *argv[])
{
	ClapTrap c1("Juanito");
	ClapTrap c2("Pepito");
	ClapTrap c3("Marianito");
	ClapTrap c4;

	c1.takeDamage(50);
	c2.takeDamage(50);
	c3.takeDamage(50);
	c4.takeDamage(50);

	c1.beRepaired(20);
	c2.beRepaired(20);
	c3.beRepaired(20);
	c4.beRepaired(20);

	c1.attack("Skag");
	c2.attack("Rakk");
	c3.attack("Psycho");
	c4.attack("Psycho");

	return 0;
}
