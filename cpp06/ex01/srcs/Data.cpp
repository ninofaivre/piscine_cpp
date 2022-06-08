/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 17:15:20 by nfaivre           #+#    #+#             */
/*   Updated: 2022/06/08 17:19:57 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <iostream>

Data::s_data(int start)
{
	this->a = start;
	this->b = start + 1;
	this->c = start + 2;
	this->d = start + 3;
	this->e = start + 4;
	this->f = start + 5;
	this->g = start + 6;
	this->h = start + 7;
	this->i = start + 8;
	this->j = start + 9;
	this->k = start + 10;
	this->l = start + 11;
	this->m = start + 12;
	this->n = start + 13;
	this->o = start + 14;
	this->p = start + 15;
	this->q = start + 16;
	this->r = start + 17;
	this->s = start + 18;
	this->t = start + 19;
	this->u = start + 20;
	this->v = start + 21;
	this->w = start + 22;
	this->x = start + 23;
	this->y = start + 24;
	this->z = start + 25;
}

void	Data::print(void)
{
	std::cout << this->a << std::endl
			  << this->b << std::endl
			  << this->c << std::endl
			  /*<< this->d << std::endl
			  << this->e << std::endl
			  << this->f << std::endl
			  << this->g << std::endl
			  << this->h << std::endl
			  << this->i << std::endl
			  << this->j << std::endl
			  << this->k << std::endl
			  << this->l << std::endl
			  << this->m << std::endl
			  << this->n << std::endl
			  << this->o << std::endl
			  << this->p << std::endl
			  << this->q << std::endl
			  << this->r << std::endl
			  << this->s << std::endl
			  << this->t << std::endl
			  << this->u << std::endl
			  << this->v << std::endl
			  << this->w << std::endl
			  << this->x << std::endl
			  << this->y << std::endl
			  << this->z << std::endl*/;
}
