/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 13:41:09 by smarquez          #+#    #+#             */
/*   Updated: 2025/09/12 14:05:01 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// FragTrap::FragTrap() : ClapTrap()
// {
//     this->hitPoints = 100;
//     this->energyPoints = 100;
//     this->attackDamage = 30;
//     std::cout << "FragTrap" << name <<  "has appeared" << std::endl;
// }

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap " << name <<  " has appeared" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy)
{
    hitPoints = copy.hitPoints;
    energyPoints = copy.energyPoints;
    attackDamage = copy.attackDamage;
    *this = copy;
    std::cout << "Copy constructor FragTrap " << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
{
    hitPoints = copy.hitPoints;
    energyPoints = copy.energyPoints;
    attackDamage = copy.attackDamage;
    return(*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << name << " asks for a high five " << std::endl;
}

void FragTrap::attack(const std::string &target)
{
    if (energyPoints <= 0)
    {
        std::cout << "No energy points available" << std::endl;
        return;
    }
    if (hitPoints <= 0)
    {
        if (hitPoints < 0)
            hitPoints = 0;
        std::cout << "No hp available" << std::endl;
        return;
    }
    std::cout << "FragTrap " << name << " has attacked " << target <<  " causing " << attackDamage << " point of damage " << std::endl;
    energyPoints--;
}