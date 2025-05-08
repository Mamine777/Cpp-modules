/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 12:08:46 by mokariou          #+#    #+#             */
/*   Updated: 2025/02/13 18:43:12 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include <iostream>
#include <string>
#include "ClapTrap.h"

class ScavTrap : public ClapTrap {
	public:
		ScavTrap(void);
		ScavTrap(const std::string& name);
		ScavTrap(const ScavTrap &other);
		ScavTrap	&operator=(const ScavTrap &other);
		~ScavTrap();
		void	attack(const std::string& target);

		void	guardGate();
};

#endif