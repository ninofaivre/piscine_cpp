/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 12:31:31 by nfaivre           #+#    #+#             */
/*   Updated: 2022/06/08 17:23:50 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Base
{

public:

	virtual ~Base(void) {};

};

class A : public Base {};
class B : public Base {};
class C : public Base {};
