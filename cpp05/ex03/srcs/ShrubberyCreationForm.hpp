/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 12:05:46 by nfaivre           #+#    #+#             */
/*   Updated: 2022/06/02 15:07:23 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Form.hpp"

# define TREE "\
         /\\\n\
        /  \\\n\
       /    \\\n\
      / +    \\\n\
     /     ¤  \\\n\
    /__     *__\\\n\
      /  +   \\\n\
     / *      \\\n\
    /     *    \\\n\
   /  +    ¤    \\\n\
  /___        ___\\\n\
     /     *  \\\n\
    /  *       \\\n\
   /         +  \\\n\
  / +            \\\n\
 /         *      \\\n\
/__________________\\\n\
        |  |\n\
        |  |\n\
        |  |\n\
        ====\n"


class ShrubberyCreationForm : public Form
{

private:

	const std::string	target;

	void	beExecuted(void);


public:

	ShrubberyCreationForm(const std::string target = "Default Target (no one given)");
	ShrubberyCreationForm(const ShrubberyCreationForm &otherInst);
	~ShrubberyCreationForm(void);

	class TouchFileFailed : public std::exception
	{
	public:
		virtual const char	*what() const throw() { return ("TouchFileFailed"); }
	};

};
