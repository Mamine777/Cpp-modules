/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mai.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 14:43:28 by mokariou          #+#    #+#             */
/*   Updated: 2025/01/04 17:35:21 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main(int ac, char **av)
{
	if (ac != 1)
		return 1;
	(void) av;
	PhoneBook phoneBook;
	std::string line;

	phoneBook.current = 0;
	while (true)
	{
		 if (std::cin.eof()) {
            std::cout << "\nCtrl+D pressed. Exiting...\n";
            break;
        }
		std::cout << "\033[31m\nEnter a command : ADD or SEARCH or EXIT \n >\033[0m";
		std::getline(std::cin, line);
		if (line == "ADD")
			phoneBook.add();
		else if (line == "SEARCH")
			phoneBook.search();
		else if (line == "EXIT"){
			std::cout << "bye bye chopitito" << std::endl;
			break ;
		}
		else
			std::cout << "\033[33mPlease add the correct input\033[0m";
	}
	return (0);
}