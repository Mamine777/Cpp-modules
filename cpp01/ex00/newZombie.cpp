/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 12:51:45 by mokariou          #+#    #+#             */
/*   Updated: 2025/01/27 13:40:22 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombei		*newZombei(std::string name)
{
	Zombei *newZombei = new Zombei(name);
	return(newZombei);
}