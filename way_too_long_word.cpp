/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   way_too_long_word.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 23:25:42 by asodor            #+#    #+#             */
/*   Updated: 2023/11/07 00:17:11 by asodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main()
{
		int	n;
		string word;
		vector<string> s;

		cin >> n;
		while (n--)
		{
		    cin >> word;
		    s.push_back(word);
		}
		
		for (string e : s)
		{
		    if (e.size() > 10)
				cout << e[0] << e.size() - 2 << e[e.size() - 1]<< endl;
			else
				cout << e <<endl;
		}
		return 0;
}