/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alago-ga <alago-ga@student.42berlin.d>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 17:27:13 by alago-ga          #+#    #+#             */
/*   Updated: 2026/07/02 17:27:15 by alago-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {};
void Zombie::announce(){
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
void Zombie::setName(std::string name) {
    this->name = name;
}
Zombie::~Zombie(){
    std::cout << name << " has been destroyed" << std::endl;
}