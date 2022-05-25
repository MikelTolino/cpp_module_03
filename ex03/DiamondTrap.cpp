/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 13:42:12 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/25 19:39:55 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

void DiamondTrapMsg(std::string name)
{
	std::cout << "Well my name is " << name << " and "
		"I'm a Diamoon.. Diamoon.. DiamondTrap\n";
}

DiamondTrap::DiamondTrap(void)
{
	ClapTrap::_name += " _clap_name";
	this->_name = "DiamondTrap";
	this->_hitPts = FragTrap::_hitPts;
	this->_energyPts = ScavTrap::_energyPts;
	this->_attackDamage = FragTrap::_attackDamage;
	DiamondTrapMsg(this->_name);
}

DiamondTrap::DiamondTrap(std::string name)
{
	ClapTrap::_name = name + "_clap_name";
	this->_name = name;
	this->_hitPts = FragTrap::_hitPts;
	this->_energyPts = ScavTrap::_energyPts;
	this->_attackDamage = FragTrap::_attackDamage;
	DiamondTrapMsg(this->_name);
}

DiamondTrap::DiamondTrap(DiamondTrap const &other)
{
	*this = other;
	DiamondTrapMsg(this->_name);
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &other)
{
	this->_name = other._name;
	this->_hitPts = other._hitPts;
	this->_energyPts = other._energyPts;
	this->_attackDamage = other._attackDamage;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << " I'M DEAD AS A DIAMOND FIELD, I'M DEAD OHMYGOD I'M DEAD!\n";
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "Hey, best friend! This is my real name " << this->_name
			  << " but everybody want to call me by my Claptrap name :(" << ClapTrap::_name
			  << ")\n";
}

void DiamondTrap::attack(std::string const &target)
{
	return ScavTrap::attack(target);
}