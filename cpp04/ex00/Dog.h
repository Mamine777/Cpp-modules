/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 13:41:32 by mokariou          #+#    #+#             */
/*   Updated: 2025/02/15 18:29:33 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H


#include <iostream>
#include <string>
#include "Animal.h"

class Dog : public Animal
{
	public:
		Dog();
		~Dog();
	using   Animal::operator=;
	void	makeSound() const;
};


#endif