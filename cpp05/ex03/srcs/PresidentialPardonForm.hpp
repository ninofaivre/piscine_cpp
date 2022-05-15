/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 12:05:46 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/15 15:00:54 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Form.hpp"
# include <string>

class PresidentialPardonForm : public Form
{

private:

	const std::string	target;

	void	beExecuted(void);


public:

	PresidentialPardonForm(const std::string target = "Default Target (no one given)");
	PresidentialPardonForm(const PresidentialPardonForm &otherInst);
	~PresidentialPardonForm(void);

};
