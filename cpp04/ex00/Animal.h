/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 13:04:48 by mokariou          #+#    #+#             */
/*   Updated: 2025/02/15 18:29:00 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

class Animal
{
	protected :
		std::string type;
	public:
		Animal(void);
		virtual ~Animal();

		Animal&				operator=(const Animal& other);
		std::string getType(void) const;
		virtual void	makeSound() const;
};

#endif