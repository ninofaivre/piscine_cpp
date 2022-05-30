/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:26:54 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/30 08:59:05 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Animal.hpp"

class Dog : public Animal
{

public:

	Dog(void);
	Dog(const Dog &otherInst);
	~Dog(void);

	Dog	&operator=(const Dog &otherInst);

	virtual void	makeSound(void) const;

};
