/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 18:42:52 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/13 16:28:59 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie
{

private:

	std::string	name;


public:
	
	Zombie(const std::string &name = "Default Zombie name (no one given)");
	~Zombie(void);

	static Zombie	*zombieHorde(const int N, const std::string &name);
	void			announce(void) const;

};

#endif
