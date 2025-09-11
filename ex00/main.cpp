/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 17:59:29 by smarquez          #+#    #+#             */
/*   Updated: 2025/09/11 13:41:03 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() 
{
    ClapTrap Joe = ClapTrap();
    ClapTrap Test = ClapTrap("testing");
    
    Joe.attack("Test");
    Test.takeDamage(2);
    Test.beRepaired(1);
    Test.attack("Joe");
    Test.takeDamage(5);
    return(0);
}