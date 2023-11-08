/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   anton_and_danik.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 00:11:28 by asodor            #+#    #+#             */
/*   Updated: 2023/11/08 00:11:41 by asodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using namespace std;

int main() {
    unsigned int n;
    unsigned int d_count, a_count;
    string s;
    
    cin >> n;
    cin >> s;
    
    a_count = 0;
    d_count = 0;
    
    for (char c : s) {
        if (c == 'A') 
            a_count++;
        if (c == 'D') 
            d_count++;
    }
    
    if (a_count > d_count)
        cout << "Anton" << endl;
    else if (d_count > a_count)
        cout << "Danik" << endl;
    else
        cout << "Friendship" << endl;
    
    return 0;
}

