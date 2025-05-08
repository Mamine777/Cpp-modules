/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 17:05:54 by mokariou          #+#    #+#             */
/*   Updated: 2025/02/09 17:06:33 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.h"

WrongCat::WrongCat() {
    type = "WrongCat";
    std::cout << "WrongCat constructor called!" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor called!" << std::endl;
}

void WrongCat::makeSound() const {
    std::cout << "Meow? (but not really)" << std::endl;
}