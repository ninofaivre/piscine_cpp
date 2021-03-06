/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:26:54 by nfaivre           #+#    #+#             */
/*   Updated: 2022/06/01 23:28:30 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{

private:

	Brain	*ptrBrain;


public:

	Dog(void);
	Dog(const Dog &otherInst);
	~Dog(void);

	Dog	&operator=(const Dog &otherInst);

	virtual void	makeSound(void) const;
	Brain	*getBrain(void);

};
