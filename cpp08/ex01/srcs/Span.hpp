/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 16:56:48 by nfaivre           #+#    #+#             */
/*   Updated: 2022/06/19 19:14:57 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <vector>
# include <exception>

class Span
{

private:

	unsigned int		size;
	std::vector<int>	content;


public:

	Span(const unsigned int size = 0);
	Span(const Span &otherInst);
	~Span(void);

	Span	&operator=(const Span &otherInst);

	void			addNumber(const int num);
	void			addNumber(const std::vector<int>::iterator start, const std::vector<int>::iterator stop);
	unsigned int	shortestSpan(void) const;
	unsigned int	longestSpan(void) const;

};
