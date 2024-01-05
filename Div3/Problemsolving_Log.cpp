/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Problemsolving_Log.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 21:27:31 by asodor            #+#    #+#             */
/*   Updated: 2024/01/05 07:11:59 by asodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    int t;
    cin >> t;
    int i = 0;
    while (t--) {
        int n;
        string log;
        cin >> n >> log;

        map<char, int> dic;

        int timeSpent = 0;
        int solvedProblem = 0;

        for (char ch : log) {
            if (dic.find(ch) == dic.end()) {
                dic[ch] = 1;
		cout << ch << " ";
                timeSpent += (ch - 'A' + 1);
		cout <<"timeSpent " << timeSpent <<';';
                if (timeSpent <= n) {
                    solvedProblem++;
                } else {
                    break;
		}
		i++;
		cout <<"solved Problem" << solvedProblem << ';';
            }
        }
        cout << solvedProblem << endl;
    }

    return 0;
}

