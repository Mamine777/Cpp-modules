/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 16:15:04 by mokariou          #+#    #+#             */
/*   Updated: 2025/02/13 18:45:10 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include <iostream>
#include <string>
#include "ClapTrap.h"

class FragTrap : public ClapTrap {
	public:
		FragTrap(const std::string& name);
		FragTrap(const FragTrap& other);
		FragTrap(void);
		~FragTrap(void);

		using	ClapTrap::operator=;
		void highFivesGuys(void);
};



#endif