/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 13:08:15 by mokariou          #+#    #+#             */
/*   Updated: 2025/02/09 17:08:39 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"

Animal::Animal() : type("Uknown Animal") {std::cout << "Default Constructor of Animal" << std::endl;}

Animal::~Animal(){std::cout << "Destructor of Animal" << std::endl;}

std::string Animal::getType() const {
	return (type);
}

void	Animal::makeSound() const {
	std::cout << "Some generic animal sound!83" << std::endl;
}