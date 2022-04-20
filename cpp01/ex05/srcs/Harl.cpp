/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:39:03 by nfaivre           #+#    #+#             */
/*   Updated: 2022/04/20 18:43:40 by nfaivre          ###   ########.fr       */
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

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void	Harl::debug(void) const
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void) const
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning(void) const
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void) const
{
	std::cerr << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level) const
{
	void	(Harl::*complainFunctionLvl[4])(void) const =
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	for (int i = 0; i < 4; i++)
	{
		if (level == complainStringLvl[i])
			(this->*complainFunctionLvl[i])();
	}
}
