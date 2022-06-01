/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 17:13:02 by nfaivre           #+#    #+#             */
/*   Updated: 2022/06/01 17:39:13 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <cstddef>

template <typename T>
void	iter(T array[], size_t len, void (function(T)))
{
	for (size_t i = 0; i < len; i++)
		function(array[i]);
}
