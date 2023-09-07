/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:17:44 by marvin            #+#    #+#             */
/*   Updated: 2023/09/07 14:17:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name)
{
    this->setType(name);
    return;
}

Weapon::~Weapon()
{
    return;
}

const std::string &Weapon::getType()
{
    return this->_str;
}

void Weapon::setType(std::string str)
{
    this->_str = str
}