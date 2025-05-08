/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 16:45:14 by mokariou          #+#    #+#             */
/*   Updated: 2025/02/13 18:46:19 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.h"
#include "ClapTrap.h"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "FragTrap default constructor has been called!" << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	std::cout << "<FragTrap " << this->name << "> Status: Created" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << "<FragTrap copy-constructor has been called!> Status: Cloned" << std::endl;
}


FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << name << " has been destroyed!" << std::endl;
}

void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << name << " requests a high five! ✋" << std::endl;
}