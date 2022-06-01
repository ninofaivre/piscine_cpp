/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 16:34:12 by nfaivre           #+#    #+#             */
/*   Updated: 2022/06/01 17:09:08 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>
#include <iomanip>

int	main(void)
{
	std::cout << std::fixed << std::setprecision(1)
			  << "std::fixed << std::setprecision(1)" << std::endl
			  << "::min<int>(0, 100) : " << ::min<int>(0, 100) << std::endl
			  << "::max<int>(0, 100) : " << ::max<int>(0, 100) << std::endl
			  << "::min(0, 100) : " << ::min(0, 100) << std::endl
			  << "::max(0, 100) : " << ::max(0, 100) << std::endl
			  << "::min<float>(0, 100) : " << ::min<float>(0, 100) << std::endl
			  << "::max<float>(0, 100) : " << ::max<float>(0, 100) << std::endl
			  << "::min(0.0f, 100.0f) : " << ::min(0.0f, 100.0f) << std::endl
			  << "::max(0.0f, 100.0f) : " << ::max(0.0f, 100.0f) << std::endl
			  << "::min<char>('a', 'z') : " << ::min<char>('a', 'z') << std::endl
			  << "::max<char>('a', 'z') : " << ::max<char>('a', 'z') << std::endl
			  << "::min('a', 'z') : " << ::min('a', 'z') << std::endl
			  << "::max('a', 'z') : " << ::max('a', 'z') << std::endl
			  << "::min<std::string>(\"chaine1\", \"chaine2\") : " << min<std::string>("chaine1", "chaine2") << std::endl
			  << "::max<std::string>(\"chaine1\", \"chaine2\") : " << max<std::string>("chaine1", "chaine2") << std::endl; // Doesn't work without explicit type for template with temporary variables
	
	std::string a = "chaine 1";
	std::string b = "chaine 2";

	std::cout << "std::string a = \"chaine 1\"" << std::endl
			  << "std::string b = \"chaine 2\"" << std::endl
			  << "::min (a, b) : " << ::min(a, b) << std::endl
			  << "::max (a, b) : " << ::max(a, b) << std::endl;
	
	::swap(a, b);
	std::cout << "::swap(a, b)" << std::endl
			  << "a : " << a << std::endl
			  << "b : " << b << std::endl;
	::swap(a, b);
	std::cout << "::swap(a, b)" << std::endl
			  << "a : " << a << std::endl
			  << "b : " << b << std::endl;
	return (0);
}
