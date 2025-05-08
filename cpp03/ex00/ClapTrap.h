/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 17:36:41 by mokariou          #+#    #+#             */
/*   Updated: 2025/02/12 20:24:32 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>
#include <string>

class ClapTrap
{
	protected :
		std::string		name;
		unsigned int	hitPoints;
		unsigned int	energyPoints;
		unsigned int	attackDamage;
	public:
		ClapTrap(void);
		ClapTrap(const ClapTrap& other);
		ClapTrap(std::string name);
		virtual ~ClapTrap();

		ClapTrap&		operator=(const ClapTrap& other);
		virtual void	attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		const std::string		get() const {return name;}
		void			set(const std::string _name);
		void			set_hitPoints(unsigned int hit);
		void			set_energy(unsigned int energy);
		void			set_attack(unsigned int attack);
		unsigned int 	getHitPoints() const;
		unsigned int 	getEnergyPoints() const;
		unsigned int 	getAttackDamage() const;

};


#endif