/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 11:26:52 by smarquez          #+#    #+#             */
/*   Updated: 2025/09/15 11:47:22 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


// DiamondTrap::DiamondTrap()
// {
    
// }
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap(), name(name)
{
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;
    std::cout << "Diamond" << name  << "has  been sumoned" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
    this->attackDamage = copy.attackDamage;
    this->energyPoints = copy.energyPoints;
    this->hitPoints = copy.hitPoints;
    this->name =copy.name;
    std::cout << "DiamondTrap" << name << "arrives" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &copy)
{
    this->attackDamage = copy.attackDamage;
    this->energyPoints = copy.energyPoints;
    this->hitPoints = copy.hitPoints;
    this->name =copy.name;
    return(*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap" << name << "left the server" << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << name << "the y call me" << ClapTrap::name << std::endl;
}

