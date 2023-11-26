/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_task.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 03:39:10 by asodor            #+#    #+#             */
/*   Updated: 2023/11/19 03:43:41 by asodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

using namespace std;

int main()
{
	string	str;
	string	result;
	const string	vowels = "AEIOUYaeiouy";

	cin >> str;
	for (char c : str)
	{
		if (vowels.find(c) == string::npos)
		{
			result += ".";
			result += char (tolower(c));
		}
	}
	cout << result << endl;
}
