/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   preparing_for_the_contest.cpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 17:06:07 by asodor            #+#    #+#             */
/*   Updated: 2024/01/10 00:52:17 by asodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(){

	short t;

	std::cin >> t;
	while (t--)
	{
		short n;
		short k;

		std::cin >> n >> k;
		short s = n - k;
		short _s = s;
		short i = 0;
		while(i < n)
		{
			if (s >= 1)
			{
				std::cout << s-- <<" ";
			}else if (s == 0)
			{
				std::cout <<++_s << " ";
			}else
			{
				break;
			}
			i++;
		}


	}

}

