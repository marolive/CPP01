/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:17:35 by marvin            #+#    #+#             */
/*   Updated: 2023/09/07 14:17:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    return;
}

HumanB::~HumanB()
{
    return;
}

std::string HumanB::getName()
{
    return this->_name;
}

std::string HumanB::getWeapon()
{
    return this->weapon;
}

void HumanB::setName(std::string name)
{
    this->_name = name;
}
void HumanB::setWeapon(std::string weapon)
{
    this->weapon = weapon;
}

void HumanB::attack(void)
{
    std::cout << this->_name << " attacks with their " << this->_weapon << std::endl;
}