/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 12:34:03 by mokariou          #+#    #+#             */
/*   Updated: 2025/01/27 14:57:36 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <new>
#include <string>

class Zombei
{
	private:
		std::string _name;
	public:
		Zombei(std::string name);
		~Zombei();
		void announce();
};

Zombei	*newZombei(std::string name);
void randomChump(std::string name);

#endif