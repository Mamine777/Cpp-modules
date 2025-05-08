/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 12:41:55 by mokariou          #+#    #+#             */
/*   Updated: 2025/02/11 13:38:25 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombei::Zombei(std::string name)
{
	this->_name = name;
	std::cout << "Zombie \"" << _name << "\" created" << std::endl;
}

Zombei::~Zombei()
{
	std::cout << "Zombie \"" << _name << "\" destroyed" << std::endl;
}

void Zombei::announce()
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void randomChump(std::string name)
{
	Zombei randomChump(name);
	randomChump.announce();
}
