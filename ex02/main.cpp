/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:41:15 by marvin            #+#    #+#             */
/*   Updated: 2023/09/07 13:41:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *PTR = &str;
    std::string &REF = str;

    std::cout << "Memory Address str: " << &str << std::endl;
    std::cout << "Memory Address PTR: " << PTR << std::endl;
    std::cout << "Memory Address REF: " << &REF << std::endl;
    std::cout << "----------------------------------------" << std::endl;
    std::cout << "Value str: " << str << std::endl;
    std::cout << "Value pointed PTR: " << *PTR << std::endl;
    std::cout << "Value pointed REF: " << REF << std::endl;

    return 0;
}