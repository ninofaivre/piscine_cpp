/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:39:03 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/13 16:51:54 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

const std::string	Harl::complainStringLvl[4] =
{
	("DEBUG"),
	("INFO"),
	("WARNING"),
	("ERROR")
};

const std::string	Harl::complainStringValue[4] =
{
	("I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"),
	("I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!"),
	("I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month."),
	("This is unacceptable! I want to speak to the manager now.")
};


Harl::Harl(void)
{
	this->complainFunctionLvl[0] = &Harl::debug;
	this->complainFunctionLvl[1] = &Harl::info;
	this->complainFunctionLvl[2] = &Harl::warning;
	this->complainFunctionLvl[3] = &Harl::error;
}

Harl::~Harl(void)
{
}

void	Harl::debug(void) const
{
	std::cout << this->complainStringValue[debugLvl] << std::endl;
}

void	Harl::info(void) const
{
	std::cout << this->complainStringValue[infoLvl] << std::endl;
}

void	Harl::warning(void) const
{
	std::cout << this->complainStringValue[warningLvl] << std::endl;
}

void	Harl::error(void) const
{
	std::cerr << this->complainStringValue[errorLvl] << std::endl;
}

void	Harl::complain(const std::string &level) const
{
	for (int i = debugLvl; i <= errorLvl; i++)
	{
		if (level == complainStringLvl[i])
		{
			std::cout << "[ " << this->complainStringLvl[i] << " ]" << std::endl;
			(this->*complainFunctionLvl[i])();
		}
	}
}
