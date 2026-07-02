/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alago-ga <alago-ga@student.42berlin.d>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 17:26:47 by alago-ga          #+#    #+#             */
/*   Updated: 2026/07/02 17:26:49 by alago-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie* horde = zombieHorde(6, "zomzom");
    for (int i = 0; i < 6; i++)
        horde[i].announce();
    delete[] horde;
    return 0;
}