/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Problemsolving_Log.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 21:27:31 by asodor            #+#    #+#             */
/*   Updated: 2024/01/05 18:33:28 by asodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    short t;
    cin >> t;

    while (t--) {
	    short n;
	    string s;
	    cin >> n;
	    cin >> s;
	    short sol = 0;
	    unordered_map<char, int> umap;
	    for (auto &it : s)
	    {
		    umap[it]++;
	    }
	    for (auto &it : umap)
	    {
		    if (it.second >= (it.first - 'A' + 1))
			    sol++;
	    }
	    cout <<sol<< endl;

    }
    return 0;
}

