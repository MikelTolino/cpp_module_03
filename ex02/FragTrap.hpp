/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 13:10:47 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/05/25 13:27:33 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

	public:
		FragTrap(void);
		FragTrap(std::string const);
		FragTrap(FragTrap const &);
		FragTrap &operator=(FragTrap const &);
		~FragTrap( void );
		void highFivesGuys(void);
};

#endif