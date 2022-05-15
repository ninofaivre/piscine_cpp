/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 15:07:25 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/15 15:25:30 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Form.hpp"
# include <string>

class Intern
{

private:

	static const std::string	formList[3];
	enum { SHRUBBERY_CREATION, ROBOTOMY_REQUEST, PRESIDENTIAL_PARDON, OUT_OF_RANGE };


public:

	Intern(void);
	~Intern(void);

	Form	*makeForm(const std::string &type, const std::string &target) const;

};
