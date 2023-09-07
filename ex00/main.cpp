/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marolive <marolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:59:26 by marolive          #+#    #+#             */
/*   Updated: 2023/09/05 19:02:41 by marolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *nzum;

    randomChump("Pietra");
    std::cout << "------------------------------" << std::endl;
    nzum = newZombie("Josh");
    nzum->announce();
    delete nzum;
    std::cout << "------------------------------" << std::endl;

    return 0;
}