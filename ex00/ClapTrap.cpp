/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 17:22:18 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/03 19:05:09 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string _name)
{
	this->name = _name;
	this->hit_pts = 10;
	this->energy_pts = 10;
	this->attack_damage = 0;
	std::cout << "Well my name is " << _name << " and "
	"I'm a Clap.. Clapt.. Claptrap\n";
}

ClapTrap::~ClapTrap()
{
	std::cout << " I'M DEAD I'M DEAD OHMYGOD I'M DEAD!\n";
}

void ClapTrap::attack(std::string const & target) {

	std::cout << "ClapTrap "
	<< name << " attack " << target << ", causing " <<
	attack_damage << " points of damage! \n";
}

void ClapTrap::takeDamage(unsigned int amount) {

	this->hit_pts -= amount;
	std::cout << "Oh my lord! My circuits are damaged!!\n";
}

void ClapTrap::beRepaired(unsigned int amount) {

	hit_pts += amount;
	std::cout << "Mmmmmm!! Are you god? Am I dead? "
	"Thanks for giving me a second chance, God.\n";
}