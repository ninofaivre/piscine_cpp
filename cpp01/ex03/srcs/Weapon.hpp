/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 19:23:42 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/30 08:55:03 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

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
