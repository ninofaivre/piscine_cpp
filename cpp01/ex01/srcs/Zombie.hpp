/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 18:42:52 by nfaivre           #+#    #+#             */
/*   Updated: 2022/04/15 22:19:24 by nfaivre          ###   ########.fr       */
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
	
	Zombie(const std::string name = "Default Zombie name (no one given)");
	~Zombie(void);

	static Zombie	*zombieHorde(int N, std::string name);

	void			set_name(std::string name);

	void			announce(void) const;

};

#endif
