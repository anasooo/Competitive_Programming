/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpful_maths.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 00:45:24 by asodor            #+#    #+#             */
/*   Updated: 2023/11/08 00:45:30 by asodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string s;
    string newS;
    cin >> s;

    vector<int> numbers;
    vector<char> operators;

    for (char c : s) {
        if (c >= '1' && c <= '3') {
            numbers.push_back(c - '0');  
        } else if (c == '+') {
            operators.push_back(c);
        }
    }

    sort(numbers.begin(), numbers.end());

    for (int i = 0; i < numbers.size(); i++) {
        newS += to_string(numbers[i]);
        if (i < numbers.size() - 1) {
            newS += "+";
        }
    }

    cout << newS << endl;

    return 0;
}

