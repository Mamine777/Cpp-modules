/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 16:24:54 by mokariou          #+#    #+#             */
/*   Updated: 2025/02/10 12:36:20 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.h"

Dog::Dog(){
	type = "Dog";
	brain = new Brain();
	std::cout << "Dog constructor called!" << std::endl;
}
Dog::~Dog(){
	delete brain;
	std::cout << "Dog destructor called!" << std::endl;
}

void	Dog::makeSound() const {
		std::cout << "Woof! Woof!" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	type = other.type;
	brain = new Brain(*other.brain);
    std::cout << "Dog copied!" << std::endl;
}

Dog&	Dog::operator=(const Dog &other)
{
	if (this == &other)
		return *this;
	type = other.type;
	delete brain;
	brain = new Brain(*other.brain);
	return *this;
	
}