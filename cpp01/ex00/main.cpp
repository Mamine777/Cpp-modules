/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:50:14 by mokariou          #+#    #+#             */
/*   Updated: 2025/01/27 14:51:46 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main(void)
{
	Zombei *zombei1;

	zombei1 = newZombei("zombie");
	zombei1->announce();
	randomChump("Random Zombie");
	delete zombei1;
}