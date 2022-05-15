/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 12:05:46 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/15 14:56:07 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Form.hpp"
# include <string>

class RobotomyRequestForm : public Form
{

private:

	const std::string	target;
	bool				shunt;

	void	beExecuted(void);


public:

	RobotomyRequestForm(const std::string target = "Default Target (no one given)");
	RobotomyRequestForm(const RobotomyRequestForm &otherInst);
	~RobotomyRequestForm(void);

};
