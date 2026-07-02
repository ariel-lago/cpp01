/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alago-ga <alago-ga@student.42berlin.d>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 17:27:26 by alago-ga          #+#    #+#             */
/*   Updated: 2026/07/02 17:27:27 by alago-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie {
private:
    std::string name;
public:
    Zombie();
    void    announce();
    void    setName(std::string name);
    ~Zombie();
};

Zombie* zombieHorde(int N, std::string name);

#endif