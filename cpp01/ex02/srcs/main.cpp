/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 18:23:17 by nfaivre           #+#    #+#             */
/*   Updated: 2022/04/18 18:34:31 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::cout << "var :" << std::endl
			  << "string (\"HI THIS IS BRAIN\") | *stringPTR = &string | &stringREF = string" << std::endl << std::endl;

	std::string	string("HI THIS IS BRAIN");
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;
	
	std::cout << "printing memory address :" << std::endl
			  << "&string : " << &string << " | stringPTR : " << stringPTR << " | &stringREF : " << &stringREF << std::endl << std::endl
			  << "printing value :" << std::endl
			  << "string : " << string << " | *stringPTR : " << *stringPTR << " | stringREF : " << stringREF << std::endl;
}
