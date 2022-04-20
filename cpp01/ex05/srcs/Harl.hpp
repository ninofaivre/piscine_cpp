/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:33:48 by nfaivre           #+#    #+#             */
/*   Updated: 2022/04/20 18:37:03 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>

class Harl
{

private:

	static const std::string	complainStringLvl[4];

	void	debug(void) const;
	void	info(void) const;
	void	warning(void) const;
	void	error(void) const;


public:

	Harl(void);
	~Harl(void);

	void	complain(std::string level) const;

};

#endif
