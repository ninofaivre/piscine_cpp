/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:26:54 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/13 14:38:29 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{

public:

	Cat(void);
	Cat(const Cat &otherInst);
	~Cat(void);

	Cat	&operator=(const Cat &otherInst);

	virtual void	makeSound(void) const;

};

#endif
