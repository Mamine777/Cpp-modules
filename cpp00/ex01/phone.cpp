/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 17:39:07 by mokariou          #+#    #+#             */
/*   Updated: 2025/01/04 17:39:09 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void PhoneBook::add(void)
{
    std::string first, last, nickname, phone, dark;

    if (full)
        std::cout << "\033[32mPhonebook is full! Overwriting oldest contact...\n\033[0m";

    do {
        std::cout << "\033[32mPlease add a First Name : \033[0m";
        std::getline(std::cin, first);
        if (first.empty()) {
            std::cout << "\033[31mFirst Name cannot be empty! Please try again.\n\033[0m";
        }
    } while (first.empty());

    do {
        std::cout << "\033[32mPlease add a Last Name: \033[0m";
        std::getline(std::cin, last);
        if (last.empty()) {
            std::cout << "\033[31mLast Name cannot be empty! Please try again.\n\033[0m";
        }
    } while (last.empty());

    do {
        std::cout << "\033[32mPlease add a NickName: \033[0m";
        std::getline(std::cin, nickname);
        if (nickname.empty()) {
            std::cout << "\033[31mNickname cannot be empty! Please try again.\n\033[0m";
        }
    } while (nickname.empty());

    do {
        std::cout << "\033[32mPlease add a Phone Number: \033[0m";
        std::getline(std::cin, phone);
        if (phone.empty()) {
            std::cout << "\033[31mPhone Number cannot be empty! Please try again.\n\033[0m";
        }
    } while (phone.empty());

    do {
        std::cout << "\033[32mPlease add a Darkest Secret: \033[0m";
        std::getline(std::cin, dark);
        if (dark.empty()) {
            std::cout << "\033[31mDarkest Secret cannot be empty! Please try again.\n\033[0m";
        }
    } while (dark.empty());

    contacts[current].setFirstName(first);
    contacts[current].setLastName(last);
    contacts[current].setNickName(nickname);
    contacts[current].setDarkest(dark);
    contacts[current].setPhone(phone);

    current = (current + 1) % 8;

    std::cout << "\nSuccessfully added your info!\n";
}

void PhoneBook::search(void)
{
    PhoneBook pb;
    bool check = false;
    std::string index;
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
        return;
    }

    std::cout << "+------------+-----------------+------------------+--------------------+--------------------+--------------------+\n";
    std::cout << "| Index      | First Name      | Last Name        | Nick Name          | Phone Number       | Darkest Secret     |\n";
    std::cout << "+------------+-----------------+------------------+--------------------+--------------------+--------------------+\n";
    std::cout << "| " << std::setw(10) << i
              << " | " << std::setw(15) << contacts[i].getFirstName()
              << " | " << std::setw(17) << contacts[i].getLastName()
              << " | " << std::setw(18) << contacts[i].getNickName()
              << " | " << std::setw(18) << contacts[i].getPhone()
              << " | " << std::setw(18) << contacts[i].getDarkest() << " |\n";

    std::cout << "+------------+-----------------+------------------+--------------------+--------------------+--------------------+\n";
}
