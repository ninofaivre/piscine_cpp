/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BetterSed.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 13:08:12 by nfaivre           #+#    #+#             */
/*   Updated: 2022/04/23 13:08:48 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BETTERSED_HPP
# define BETTERSED_HPP

# include <string>

namespace BetterSed
{
	void	writeOutputFile(const std::string inputFileName, const std::string little, const std::string replaced);
}

#endif
