/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 16:24:54 by mokariou          #+#    #+#             */
/*   Updated: 2025/02/09 16:49:25 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.h"

Dog::Dog(){
	type = "Dog";
	std::cout << "Dog constructor called!" << std::endl;
}
Dog::~Dog(){
	std::cout << "Dog destructor called!" << std::endl;
}

void	Dog::makeSound() const {
		std::cout << "Woof! Woof!" << std::endl;
}