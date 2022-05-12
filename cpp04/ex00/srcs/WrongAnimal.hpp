/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:10:58 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/12 12:32:44 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>

class WrongAnimal
{

protected:

	std::string	type;


public:

	WrongAnimal(void);
	WrongAnimal(const std::string type);
	WrongAnimal(const WrongAnimal &otherInst);
	virtual ~WrongAnimal(void);

	WrongAnimal	&operator=(const WrongAnimal &otherInst);

	std::string	getType(void);
	void		makeSound(void);
	
};

#endif
