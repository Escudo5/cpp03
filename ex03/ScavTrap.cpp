/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 14:49:17 by smarquez          #+#    #+#             */
/*   Updated: 2025/09/16 15:33:09 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << "ScavTrap " << name << " arrives!" << std::endl;
}

// ScavTrap::ScavTrap()
// {
//     std::cout << "default constructor in Scavtrap" << std::endl;
// }

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << "ScavTrap " << name << " arrives!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
    std::cout << "Copy constructor called in Scavtrap" << std::endl;
    name = copy.name;
    hitPoints = copy.hitPoints;
    energyPoints = copy.energyPoints;
    attackDamage = copy.attackDamage;
    *this = copy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    std::cout << "asign operator called" << std::endl;
    name = other.name;
    hitPoints = other.hitPoints;
    energyPoints = other.energyPoints;
    attackDamage = other.attackDamage;
    return(*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is in Gatekeeper mode" << std::endl;
}


