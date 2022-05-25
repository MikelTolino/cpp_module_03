/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 17:22:18 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/25 11:39:51 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void claptrapMsg( std::string name )
{
	std::cout << "Well my name is " << name << " and "
	"I'm a Clap.. Clapt.. Claptrap\n";
}

ClapTrap::ClapTrap( void ) : _name("ClapTrap"), _hitPts(10), _energyPts(10), _attackDamage(0)
{
	claptrapMsg(this->_name);
}

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->_hitPts = 10;
	this->_energyPts = 10;
	this->_attackDamage = 0;
	claptrapMsg(this->_name);
}

ClapTrap::ClapTrap( ClapTrap const &other)
{
	*this = other;
	claptrapMsg(this->_name);
}

ClapTrap & ClapTrap::operator= (ClapTrap const & other)
{
	this->_name = other._name;
	this->_hitPts = other._hitPts;
	this->_energyPts = other._energyPts;
	this->_attackDamage = other._attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << " I'M DEAD I'M DEAD OHMYGOD I'M DEAD!\n";
}

void ClapTrap::attack(std::string const & target) {

	std::cout << "ClapTrap "
	<< this->_name << " attack " << target << ", causing " <<
	this->_attackDamage << " points of damage! \n";
}

void ClapTrap::takeDamage(unsigned int amount) {

	this->_hitPts -= amount;
	std::cout << "Oh my lord! My circuits are damaged!!\n(-" << amount << " Points of damage)\n";
}

void ClapTrap::beRepaired(unsigned int amount) {

	this->_hitPts += amount;
	std::cout << "Mmmmmm!! Are you god? Am I dead? "
	"Thanks for giving me a second chance, God.\n(+" << amount << " Points of health)\n";
}