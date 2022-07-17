/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*  By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 17:03:41 by nfaivre           #+#    #+#             */
/*   Updated: 2022/07/17 14:06:45 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>
#include <iterator>

Span::Span(const unsigned int size)
: size(size)
{
}

Span::Span(const Span &otherInst)
{
	*this = otherInst;
}

Span::~Span(void)
{
}

Span	&Span::operator=(const Span &otherInst)
{
	this->size = otherInst.size;
	this->content = otherInst.content;
	return (*this);
}

void			Span::addNumber(const int num)
{
	if (this->content.size() == this->size)
		throw std::out_of_range("No more space in Span");
	this->content.push_back(num);
}

void			Span::addNumber(const std::vector<int>::iterator start, const std::vector<int>::iterator stop)
{
	if (std::distance(start, stop) > static_cast<long int>(this->size - this->content.size()))
		throw std::out_of_range("Range bigger than remaining space in Span");
	this->content.insert(this->content.end(), start, stop);
}

unsigned int	Span::shortestSpan(void) const
{
	std::vector<int>	tmp = this->content;
	int					shortestDiff;

	if (this->content.size() < 2)
		throw std::logic_error("Not enough value in Span to provide shortestSpan");
	std::sort(tmp.begin(), tmp.end());
	shortestDiff = std::abs(tmp[0] - tmp[1]);
	for (std::vector<int>::iterator it = (tmp.begin() + 1); it != tmp.end(); it++)
	{
		if (!shortestDiff)
			break ;
		if (std::abs(*it - *(it - 1)) < shortestDiff)
			shortestDiff = std::abs(*it - *(it - 1))
	}
	return (shortestDiff);
}

unsigned int	Span::longestSpan(void) const
{
	if (this->content.size() < 2)
		throw std::logic_error("Not enough value in Span to provide longestSpan");
	return (*std::max_element(this->content.begin(), this->content.end()) - *std::min_element(this->content.begin(), this->content.end()));
}
