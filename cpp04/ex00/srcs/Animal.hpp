/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:10:58 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/13 14:36:05 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class Animal
{

protected:

	std::string	type;


public:

	Animal(const std::string &type = "");
	Animal(const Animal &otherInst);
	virtual ~Animal(void);

	Animal	&operator=(const Animal &otherInst);

	std::string		getType(void) const;
	virtual void	makeSound(void) const;
	
};

#endif
