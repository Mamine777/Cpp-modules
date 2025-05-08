/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 15:02:15 by mokariou          #+#    #+#             */
/*   Updated: 2025/01/27 15:38:24 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->_name = name;
}

void	Zombie::announce()
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie *zombieHorde(int N, std::string name)
{
	Zombie	*zombieHorde;

	zombieHorde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		zombieHorde[i] = Zombie(name);
	}
	return(zombieHorde);
}

int main(void)
{
	Zombie	*zombie1;
	int		N;

	N = 4;
	zombie1 = zombieHorde(N, "ZOMBIE");
	int i = -1;
	while (++i, i < N)
	{
		std::cout << "number " << i << ":";
		zombie1[i].announce();
	}
	delete[] zombie1;
}