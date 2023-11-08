/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   petya_and_strings.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 23:52:58 by asodor            #+#    #+#             */
/*   Updated: 2023/11/07 23:53:37 by asodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1;
    string s2;
    
    cin >> s1;
    cin >> s2;
    
    for (char &c : s1)
    c = tolower(c);
    
    for (char &c : s2)
    c = tolower(c);
    
    if(s1 == s2)
    cout << "0";
    else if (s1 > s2)
    cout << "1";
    else 
    cout << "-1";
    return 0;
}
