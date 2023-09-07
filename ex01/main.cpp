/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 09:25:25 by marvin            #+#    #+#             */
/*   Updated: 2023/09/07 09:25:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *zombies = zombieHorde(5, "Tripaseca");
    int i = 0;
    std::cout << std::endl;
    while (i < 5)
    {
        zombies[i].announce();
        i++;
    }
    std::cout << std::endl;
    delete[] zombies;
    return 0;
}