/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alago-ga <alago-ga@student.42berlin.d>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 14:07:56 by alago-ga          #+#    #+#             */
/*   Updated: 2026/07/02 14:07:59 by alago-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    Zombie *heap = newZombie("Heap");
    heap->announce();
    delete heap;

    randomChump("Stack");
    return 0;
}