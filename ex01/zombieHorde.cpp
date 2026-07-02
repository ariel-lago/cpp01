/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alago-ga <alago-ga@student.42berlin.d>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 17:27:01 by alago-ga          #+#    #+#             */
/*   Updated: 2026/07/02 17:27:02 by alago-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    if (N <= 0)
        return (NULL);
    Zombie* horde = new Zombie[N];
    for(int i = 0; i < N; i++)
        horde[i].setName(name);
    return  horde;

}