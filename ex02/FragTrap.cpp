/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 13:11:38 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/25 13:18:53 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void FragTrapMsg( std::string name )
{
	std::cout << "Well my name is " << name << " and "
	"I'm a Fraag.. Fraag.. FragTrap\n";
}

FragTrap::FragTrap( void )
{
	this->_name = "FragTrap";
	this->_hitPts = 100;
	this->_energyPts = 100;
	this->_attackDamage = 30;
	FragTrapMsg(this->_name);
}

FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	this->_hitPts = 100;
	this->_energyPts = 100;
	this->_attackDamage = 30;
	FragTrapMsg(this->_name);
}

FragTrap::FragTrap( FragTrap const &other)
{
	*this = other;
	FragTrapMsg(this->_name);
}

FragTrap & FragTrap::operator= (FragTrap const & other)
{
	this->_name = other._name;
	this->_hitPts = other._hitPts;
	this->_energyPts = other._energyPts;
	this->_attackDamage = other._attackDamage;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << " I'M DEAD COLEGUITA I'M DEAD OHMYGOD I'M DEAD!\n";
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "MINION! GIMME FIVE!!!\n";
}