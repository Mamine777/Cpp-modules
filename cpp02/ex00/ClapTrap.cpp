/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 17:40:56 by mokariou          #+#    #+#             */
/*   Updated: 2025/02/12 20:25:20 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

ClapTrap::ClapTrap(void){
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	std::cout << "ClapTrap " << name << " has been created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) 
{ 
	std::cout << "<ClapTrap copy-constructor has been called!> Status: Cloned" << std::endl;
	*this = other;

} 
ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap " << name << " has been destroyed!" << std::endl;
}

ClapTrap::ClapTrap(const std::string name)
{
	std::cout << "<ClapTrap " << name << "> " << "Status: Created" << std::endl;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
}

void	ClapTrap::attack(const std::string& target){

	if (energyPoints == 0 || hitPoints == 0){ std::cout << "ClapTrap " << name << " can't attack!" << std::endl; return ;}
	energyPoints--;
	 std::cout << "ClapTrap " << name << " attacks " << target
              << ", causing " << attackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	hitPoints = (hitPoints > amount) ? (hitPoints - amount) : 0;
	std::cout << "ClapTrap " << name << " takes " << amount
              << " points of damage! HP left: " << hitPoints << std::endl;
}
void	ClapTrap::beRepaired(unsigned int amount)
{
	if (energyPoints == 0 || hitPoints == 0) {
        std::cout << "ClapTrap " << name << " can't repair itself!" << std::endl;
        return;
    }
	 energyPoints--;
    hitPoints += amount;
    std::cout << "ClapTrap " << name << " repairs itself for " << amount
              << " HP! Total HP: " << hitPoints << std::endl;
}

ClapTrap&			ClapTrap::operator=(const ClapTrap& other)
{
	this->set(other.get());
	this->set_hitPoints(other.getHitPoints());
	this->set_energy(other.getEnergyPoints());
	this->set_attack(other.getAttackDamage());

	return (*this);
}

void	ClapTrap::set(std::string _name)
{
	this->name = _name;
}

void	ClapTrap::set_hitPoints(unsigned int hit)
{
	this->hitPoints = hit;
}

void	ClapTrap::set_energy(unsigned int energy)
{
	this->energyPoints = energy;
}

void	ClapTrap::set_attack(unsigned int attack)
{
	this->attackDamage = attack;
}
unsigned int		ClapTrap::getHitPoints(void) const
{
	return (this->hitPoints);
}

unsigned int		ClapTrap::getEnergyPoints(void) const
{
	return (this->energyPoints);
}

unsigned int		ClapTrap::getAttackDamage(void) const
{
	return (this->attackDamage);
}
