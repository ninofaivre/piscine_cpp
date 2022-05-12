/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:26:54 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/12 12:39:53 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{

public:

	WrongCat(void);
	WrongCat(const WrongCat &otherInst);
	~WrongCat(void);

	WrongCat	&operator=(const WrongCat &otherInst);

	void	makeSound(void);

};

#endif
