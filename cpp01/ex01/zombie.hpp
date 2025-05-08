/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 14:57:09 by mokariou          #+#    #+#             */
/*   Updated: 2025/01/27 15:27:27 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <new>

class Zombie
{
private:
	std::string _name;
public:
	Zombie(){}
	Zombie(std::string name);
	~Zombie(){}

	void announce(void);
};

Zombie *zombieHorde(int N, std::string name);

#endif