/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:17:38 by marvin            #+#    #+#             */
/*   Updated: 2023/09/07 14:17:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    private:
        std::string _name;
        Weapon *weapon;
    public:
        HumanB(std::string name);
        ~HumanB();
        std::string getWeapon();
        std::string getName();
        void setWeapon(std::string weapon);
        void setName(std::string name);
        void attack(void);
};

#endif