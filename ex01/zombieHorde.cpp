/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 09:25:30 by marvin            #+#    #+#             */
/*   Updated: 2023/09/07 09:25:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    int i = 0;

    Zombie *zombie = new Zombie[N];
    while (i < N)
    {
        zombie[i].setZombieName(name);
        i++;
    }  
    return(zombie);
}