/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 14:17:36 by mokariou          #+#    #+#             */
/*   Updated: 2025/01/03 12:22:35 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>

class contact
{
	private :
		std::string	firstname;
		std::string	lastname;
		std::string	nickname;
		std::string	darkest;
		std::string	PhoneNumber;
	public :
		std::string getFirstName() {return (firstname);}
		void setFirstName(std::string& newname) {firstname = newname;}
//
		std::string getLastName() {return (lastname);}
		void setLastName(std::string& newname) {lastname = newname;}
//
		std::string getNickName() {return (nickname);}
		void setNickName(std::string& newname) {nickname = newname;}
//
		std::string getDarkest() {return (darkest);}
		void setDarkest(std::string& newname) {darkest = newname;}
//
		std::string getPhone() {return (PhoneNumber);}
		void setPhone(std::string& newname) {PhoneNumber = newname;}
	
	
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