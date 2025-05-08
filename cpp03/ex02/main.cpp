/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 12:50:53 by mokariou          #+#    #+#             */
/*   Updated: 2025/02/09 12:58:46 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"
#include "FragTrap.h"

int main()
{
	FragTrap clap("amine");
	std::cout << clap.getEnergyPoints() << std::endl;
}