/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:18:52 by mokariou          #+#    #+#             */
/*   Updated: 2025/02/11 14:07:54 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>


class Harl
{
	public :
		void	complain(std::string level)
		{
			void	(Harl::*complaints[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
			std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
			for (int i = 0; i < 4; i++)
			{
				if (level == levels[i])
				{
					(this->*complaints[i])();
					return ;
				}
			}
		}
	private :
		void debug() {
			std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
		}
		void info() {
			std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
		}
		void warning() {
			std::cout << "I think I deserve to have some free bacon for having to wait for so long. I want to get my burger now!" << std::endl;
		}
		void error() {
			std::cout << "This is unacceptable! I want to speak to the manager now!" << std::endl;
		}
};