/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 17:59:26 by marolive          #+#    #+#             */
/*   Updated: 2023/09/07 12:03:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Fool Zombie Spawned!" << std::endl << std::endl;
    return;
}

Zombie::Zombie(std::string name)
{
    this->_name = name;
    std::cout << "Fool Zombie Spawned!" << std::endl << std::endl;
}

Zombie::~Zombie()
{
    std::cout << this->_name << " Dead!" << std::endl;
    return;
}

std::string Zombie::getZombieName()
{
    return this->_name;
}

void Zombie::setZombieName(std::string name)
{
    this->_name = name;
}

void Zombie::announce(void)
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}