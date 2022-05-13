/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 08:05:12 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/13 08:41:02 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "idea " + i;
}

Brain::Brain(const Brain &otherInst)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = otherInst.ideas[i];
}

Brain::~Brain(void)
{
}

Brain	&Brain::operator=(const Brain &otherInst)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = otherInst.ideas[i];
	return (*this);
}
