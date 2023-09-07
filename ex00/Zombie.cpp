/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marolive <marolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 17:59:26 by marolive          #+#    #+#             */
/*   Updated: 2023/09/02 19:02:41 by marolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Fool Zombie Spawned!" << std::endl << std::endl;
    return;
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