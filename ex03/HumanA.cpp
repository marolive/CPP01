/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:17:29 by marvin            #+#    #+#             */
/*   Updated: 2023/09/07 14:17:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): weapon(weapon)
{
    this->_name = name;
    return;
}

HumanA::~HumanA()
{
    std::cout << this->_name << " Runaway..." << std::endl;
    return;
}

void HumanA::attack(void)
{
    std::cout << this->_name << " attacks with their " << this->weapon.getType() << std::endl;
}