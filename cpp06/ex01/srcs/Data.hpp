/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 11:41:24 by nfaivre           #+#    #+#             */
/*   Updated: 2022/06/01 11:52:46 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <stdint.h>

class Data
{

private:

	unsigned int	value;


public:

	Data(const unsigned int value = 0);
	Data(const Data &otherInst);
	~Data(void);

	Data	&operator=(const Data &otherInst);

	unsigned int	getValue(void) const;

};
