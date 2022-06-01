/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 11:43:43 by nfaivre           #+#    #+#             */
/*   Updated: 2022/06/01 11:46:30 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(const unsigned int value)
: value(value)
{
}

Data::Data(const Data &otherInst)
{
	*this = otherInst;
}

Data::~Data(void)
{
}

Data	&Data::operator=(const Data &otherInst)
{
	this->value = otherInst.value;
	return (*this);
}

unsigned int	Data::getValue(void) const
{
	return (this->value);
}
