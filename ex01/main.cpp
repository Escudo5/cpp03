/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 17:59:29 by smarquez          #+#    #+#             */
/*   Updated: 2025/09/12 12:28:37 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() 
{
    ClapTrap Joe = ClapTrap();
    ScavTrap Test = ScavTrap("testing");
    
	Test.attack("Roland");
	Joe.takeDamage(Test.getAttackDamage());
	Joe.beRepaired(10);
	Test.guardGate();
    return(0);
}
