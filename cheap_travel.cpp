/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cheap_travel.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 05:19:35 by asodor            #+#    #+#             */
/*   Updated: 2023/11/19 05:19:58 by asodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;

   
    int individual_cost = n * a;
    int special_ticket_cost = (n / m) * b + min((n % m) * a, b);

    cout << min(individual_cost, special_ticket_cost) << endl;

    return 0;
}
