/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   team.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 04:18:50 by asodor            #+#    #+#             */
/*   Updated: 2023/11/07 04:18:54 by asodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {
    int n,i,count;
    int petya, vasya, tonya;
    
    std::cin >> n;
    
    i = 0;
    count = 0;
    while (i < n)
    {
        std::cin >> petya >> vasya >> tonya;
        
        if (petya + vasya + tonya >= 2)
            count++;
        i++;
    }
    std::cout << count <<std::endl;
    return 0;
}

