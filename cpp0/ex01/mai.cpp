/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mai.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 14:43:28 by mokariou          #+#    #+#             */
/*   Updated: 2024/12/23 17:12:44 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main(void)
{
	PhoneBook phoneBook;
	std::string line;

	phoneBook.current = 0;
	while (true)
	{
		std::cout << "\nEnter a command : ADD or SEARCH or EXIT \n >";
		std::getline(std::cin, line);
		if (line == "ADD")
			phoneBook.add();
		else if (line == "SEARCH")
			phoneBook.search();
		else if (line == "EXIT")
			break ;
	}
	return (0);
}