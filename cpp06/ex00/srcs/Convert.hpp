/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 10:13:13 by nfaivre           #+#    #+#             */
/*   Updated: 2022/06/01 11:34:58 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Convert
{

private:

	double	value;


public:

	Convert(void);
	Convert(const char *data);
	Convert(const Convert &otherInst);
	~Convert(void);

	Convert	&operator=(const Convert &otherInst);

	void	displayAll(void) const;
	void	displayChar(void) const;
	void	displayInt(void) const;
	void	displayFloat(void) const;
	void	displayDouble(void) const;
};
