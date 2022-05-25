/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 11:47:48 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/25 12:19:01 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void ScavTrapMsg( std::string name )
{
	std::cout << "Well my name is " << name << " and "
	"I'm a Scaav.. Scaav.. ScavTrap\n";
}

ScavTrap::ScavTrap( void )
{
	this->_name = "ScavTrap";
	this->_hitPts = 100;
	this->_energyPts = 50;
	this->_attackDamage = 20;
	ScavTrapMsg(this->_name);
}

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->_hitPts = 100;
	this->_energyPts = 50;
	this->_attackDamage = 20;
	ScavTrapMsg(this->_name);
}

ScavTrap::ScavTrap( ScavTrap const &other)
{
	*this = other;
	ScavTrapMsg(this->_name);
}

ScavTrap & ScavTrap::operator= (ScavTrap const & other)
{
	this->_name = other._name;
	this->_hitPts = other._hitPts;
	this->_energyPts = other._energyPts;
	this->_attackDamage = other._attackDamage;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << " I'M DEAD AMIGOO I'M DEAD OHMYGOD I'M DEAD!\n";
}

void ScavTrap::guardGate( void )
{
	std::cout << "You shall not pass!!!!\n";
}