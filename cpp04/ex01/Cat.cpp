/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 16:51:09 by mokariou          #+#    #+#             */
/*   Updated: 2025/02/10 12:52:14 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.h"

Cat::Cat() {
	brain = new Brain();
	type = "Cat";
	std::cout << "Cat constructor called!" << std::endl;
}
Cat::~Cat(){
	delete brain;
	std::cout << "Cat destructor called!" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Meow! Meow!" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	type = other.type;
	brain = new Brain(*other.brain);
	std::cout << "Dog copied!" << std::endl;
}

Cat&	Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		type = other.type;
		delete brain;
		brain = new Brain(*other.brain);
	}
	return *this;
}