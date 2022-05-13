/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:33:48 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/13 16:51:46 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>

class Harl
{

private:

	static const std::string	complainStringLvl[4];
	static const std::string	complainStringValue[4];
	void	(Harl::*complainFunctionLvl[4])(void) const;
	enum	{ debugLvl, infoLvl, warningLvl, errorLvl };

	void	debug(void) const;
	void	info(void) const;
	void	warning(void) const;
	void	error(void) const;


public:

	Harl(void);
	~Harl(void);

	void	complain(const std::string &level) const;

};

#endif
