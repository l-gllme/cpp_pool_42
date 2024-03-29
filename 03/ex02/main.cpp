/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:42:25 by lguillau          #+#    #+#             */
/*   Updated: 2022/11/03 18:35:46 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int	main(void)
{
	ScavTrap a("Tata");
	FragTrap b("Toto");

	a.attack("b");
	a.takeDamage(50);
	a.guardGate();
	a.beRepaired(10);
	b.attack("b");
	b.takeDamage(50);
	b.highFiveGuys();
	b.beRepaired(10);
}
