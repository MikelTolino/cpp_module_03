/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 17:15:30 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/25 13:09:49 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
protected:
	std::string _name;
	int _hitPts;
	int _energyPts;
	int _attackDamage;

public:
	ClapTrap(std::string);
	ClapTrap( void );
	ClapTrap(ClapTrap const &);
	ClapTrap & operator= (ClapTrap const &);
	~ClapTrap( void );
	void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif