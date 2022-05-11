/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 17:50:14 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/11 11:43:50 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

int	main(void)
{
	FragTrap Test("Test");
	FragTrap TestCpy ("lol");

	TestCpy = Test;
	Test.attack("random guy");
	TestCpy.attack("random guy");
	return (0);
}
