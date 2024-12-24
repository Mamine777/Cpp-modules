/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 14:17:36 by mokariou          #+#    #+#             */
/*   Updated: 2024/12/23 17:12:26 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <cstring>

class contact
{
	public :
		std::string	firstname;
		std::string	lastname;
		std::string	nickname;
		std::string	darkest;
		std::string	PhoneNumber;
};

class PhoneBook
{
	public :
		contact contacts[8];
		bool	full;
		int		current; 
	public :
		void	add(void);
		void	search(void);

};
#endif