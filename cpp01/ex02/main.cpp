/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:49:09 by mokariou          #+#    #+#             */
/*   Updated: 2025/01/27 17:29:32 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string	*to_brain = &brain;
	std::string	&from_brain = brain;

	std::cout << "The memory address of the brain variable: "<< &brain << std::endl;
	std::cout << "The memory address held by to_brain: " << to_brain << std::endl;
	std::cout << "The memory address held by from_brain: " << &from_brain << std::endl;
	std::cout << std::endl;
	std::cout << "The value of the brain variable: " << brain << std::endl;
	std::cout << "The value pointed to by to_brain: "<< *to_brain << std::endl;
	std::cout << "The value pointed to by from_brain: " << from_brain << std::endl;
}