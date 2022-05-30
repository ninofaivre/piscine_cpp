/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 07:59:52 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/30 09:00:36 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>

class Brain
{

private:

	std::string	ideas[100];


public:

	Brain(void);
	Brain(const Brain &otherInst);
	~Brain(void);

	Brain	&operator=(const Brain &otherInst);


};
