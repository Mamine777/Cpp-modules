/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 17:29:47 by mokariou          #+#    #+#             */
/*   Updated: 2024/12/23 19:19:21 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <cstdio>

void PhoneBook::add(void)
{
	if (full)
		std::cout << "Phonebook is full! Overwriting oldest contact...\n";

	std::string first, last, nickname, Phone, dark;
	std::cout << "Please add a First Name : ";
	std::getline(std::cin, first);
	std::cout << "Please add a Last Name : ";
	std::getline(std::cin, last);
	std::cout << "Please add a Nick Name: ";
	std::getline(std::cin, nickname);
	std::cout << "Please add a Phone NUmber : ";
	std::getline(std::cin, Phone);
	std::cout << "Please add a your Darkest secret : ";
	std::getline(std::cin, dark);

	contacts[current].firstname = first;
	contacts[current].lastname = last;
	contacts[current].nickname = nickname;
	contacts[current].darkest = dark;
	contacts[current].PhoneNumber = Phone;
	current = current + 1 % 8;

	std::cout << "\nSuccessfully added your info!\n";
}

void PhoneBook::search(void)
{
	std::       
	std::cout << "Please enter an Index\n";
}