/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 23:05:31 by nfaivre           #+#    #+#             */
/*   Updated: 2022/05/30 08:41:52 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Contact.hpp"
# include <string>

class PhoneBook
{
	
private:

	Contact				Contacts[8];

	static const int	max_amount;
	int					amount;

	static bool	is_valid_search_index(std::string buffer, int amount);
	static void	display_search_header(void);

public:

	PhoneBook(void);
	~PhoneBook(void);

	void	add(void);
	void	search(void) const;

};
