/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 19:23:42 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/13 16:35:11 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{

private:

	std::string	type;


public:

	Weapon(const std::string &type);
	~Weapon(void);

	const std::string	&getType(void) const;
	void				setType(const std::string &type);

};

#endif
