/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 17:29:47 by mokariou          #+#    #+#             */
/*   Updated: 2024/12/24 16:56:28 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>
#include <string>
#include <cstring>
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
	PhoneBook pb;
	bool check = false;
	std::string	index;
	int copy = current;

	std::cout << "Please enter an Index\n";
	std::getline(std::cin, index);

	int i = atoi(index.c_str());
	while (!check && copy != 0)
	{
		if (i == copy--)
			check = true;
	}
	if (i < 0 || i >= 8 || (i >= current && !full))
	{
		std::cout << "Please ADD a contact first !\n";
		return ;
	}
	std::cout << "+----------+----------+---------+------------+------------------+\n";
	std::cout << "| Index    | First Name| Last Name| Nick Name | Phone Number     |\n";
	std::cout << "+----------+----------+---------+------------+------------------+\n";
	std::cout << "| " << std::setw(6) << i << " | " << std::setw(8) << contacts[i].firstname << "  |  " << std::setw(9) << contacts[i].lastname << " | " << std::setw(8) << contacts[i].nickname << " | " << std::setw(12) << contacts[i].PhoneNumber << "     |\n";
	std::cout << "+----------+------------+-----------+-----------+------------------+\n";
}