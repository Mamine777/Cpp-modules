/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 18:52:11 by mokariou          #+#    #+#             */
/*   Updated: 2025/02/10 11:44:30 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.h"

Brain::Brain()
{
	for (int i = 0; i < 100; i++){
		ideas[i] = "Empty Idea";
	}
	std::cout << "Default constructor of Brain" << std::endl;
}

Brain::~Brain(){
	std::cout << "Destructor of Brain" << std::endl;
}

Brain::Brain(const Brain &other)
{
	*this = other;
	std::cout << "Copy-Constructor of Brain" << std::endl;
}
Brain&	Brain::operator=(const Brain &other)
{
	if (this == &other)
		return *this;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	return (*this);
}