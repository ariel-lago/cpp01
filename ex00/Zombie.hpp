/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alago-ga <alago-ga@student.42berlin.d>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 14:08:09 by alago-ga          #+#    #+#             */
/*   Updated: 2026/07/02 17:27:54 by alago-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie {
private:
	std::string	name;
public:
	Zombie(std::string name);
	void	announce();
    ~Zombie();
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif
