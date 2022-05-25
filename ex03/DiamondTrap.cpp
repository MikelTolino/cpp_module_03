/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 13:42:12 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/25 14:25:51 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

void DiamondTrapMsg( std::string name )
{
	std::cout << "Well my name is " << name << " and "
	"I'm a Diamoon.. Diamoon.. DiamondTrap\n";
}

DiamondTrap::DiamondTrap( void )
{
	this->_name = "DiamondTrap";
	this->_hitPts = 100;
	this->_energyPts = 100;
	this->_attackDamage = 30;
	DiamondTrapMsg(this->_name);
}

DiamondTrap::DiamondTrap(std::string name)
{
	this->_name = name;
	this->_hitPts = 100;
	this->_energyPts = 100;
	this->_attackDamage = 30;
	DiamondTrapMsg(this->_name);
}

DiamondTrap::DiamondTrap( DiamondTrap const &other)
{
	*this = other;
	DiamondTrapMsg(this->_name);
}

DiamondTrap & DiamondTrap::operator= (DiamondTrap const & other)
{
	this->_name = other._name;
	this->_hitPts = other._hitPts;
	this->_energyPts = other._energyPts;
	this->_attackDamage = other._attackDamage;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << " I'M DEAD COLEGUITA I'M DEAD OHMYGOD I'M DEAD!\n";
}

void DiamondTrap::whoAmI( void )
{

}