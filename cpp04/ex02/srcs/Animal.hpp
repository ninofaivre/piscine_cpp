/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:10:58 by nfaivre           #+#    #+#             */
/*   Updated: 2022/06/02 13:37:26 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>

class Animal
{

protected:

	std::string	type;


public:

	Animal(const std::string &type = "");
	Animal(const Animal &otherInst);
	virtual ~Animal(void) = 0;

	Animal	&operator=(const Animal &otherInst);

	std::string		getType(void) const;
	virtual void	makeSound(void) const = 0;
	
};
