/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 17:59:29 by smarquez          #+#    #+#             */
/*   Updated: 2025/09/12 13:52:14 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main() 
{
	ClapTrap roland = ClapTrap("Roland");
	ScavTrap jack = ScavTrap("Jack");
	FragTrap lilith = FragTrap("Lilith");

	jack.attack("Roland");
    roland.takeDamage(jack.getAttackDamage());
	jack.guardGate();
	
	lilith.attack("Roland");
	roland.takeDamage(lilith.getAttackDamage());
    lilith.highFivesGuys();

	return (0);	
}
