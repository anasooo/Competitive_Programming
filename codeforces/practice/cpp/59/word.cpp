/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   word.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 05:01:17 by asodor            #+#    #+#             */
/*   Updated: 2023/11/07 05:01:19 by asodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string s;
    int uppercount,lowercount;
    
    cin >> s;
    uppercount = 0;
    lowercount = 0;
    for (char c : s)
    {
        if (isupper(c))
            uppercount++;
        else
            lowercount++;
    }
    if (uppercount  > lowercount)
    {
        for (char &c : s)
            c = toupper(c);
    }
    else 
    {
        for (char &c : s)
            c = tolower(c);
    }
    cout << s << endl;
        
}

