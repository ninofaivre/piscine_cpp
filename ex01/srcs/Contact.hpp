/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 22:17:16 by nfaivre           #+#    #+#             */
/*   Updated: 2022/04/14 23:52:20 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{

private:

	std::string	fields_value[5];
	int			index;


public:

	static const std::string	fields_name[5];
	enum						{ first_name, last_name, nickname, phone_number, darkest_secret };
	static const int			preview_column_width;

	Contact(void);
	~Contact(void);

	void	set_fields_value(void);
	void	set_index(int index);

	void	display_all_fields(void) const;
	void	display_preview_fields(void) const;

};

#endif
