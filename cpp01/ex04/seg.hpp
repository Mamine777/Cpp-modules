/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   seg.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 10:49:04 by mokariou          #+#    #+#             */
/*   Updated: 2025/02/04 13:06:53 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SEG_HPP
#define SEG_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <cstring>

class seg
{
	private:
		std::string	_str;
	public:
		void	set_name(std::string name) {_str += name + '\n';}
		std::string	get_name(){return _str;}
};

#endif