/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 14:01:22 by nfaivre           #+#    #+#             */
/*   Updated: 2022/06/20 18:53:18 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <algorithm>

template <typename T>
typename T::iterator	easyfind(T &big, int little)
{
	return (find(big.begin(), big.end(), little));
}
