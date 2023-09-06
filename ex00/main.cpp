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
    Zombie zum("haha");
    Zombie *nzum;

    std::cout << "New: " << zum.getZombieName() << std::endl;
    zum.announce();
    std::cout << "------------------------------------------" << std::endl;
    std::cout << "Next: " << std::endl;
    nzum = newZombie("hehe");
    std::cout << "Next: " << nzum->getZombieName() << std::endl;
    zum.announce();
    std::cout << "------------------------------------------" << std::endl;
    randomChump("huhu");

    delete nzum;
    return 0;
}