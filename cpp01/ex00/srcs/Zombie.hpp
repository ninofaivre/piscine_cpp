/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 18:42:52 by nfaivre           #+#    #+#             */
/*   Updated: 2022/04/15 20:31:07 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie
{

private:

	const std::string	name;


public:
	
	Zombie(std::string name);
	~Zombie(void);

	static Zombie	*newZombie(std::string name);
	static void		randomChump(std::string name);

	void			announce(void) const;

};

#endif
