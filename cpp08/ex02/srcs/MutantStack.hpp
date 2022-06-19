/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaivre <nfaivre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 21:03:13 by nfaivre           #+#    #+#             */
/*   Updated: 2022/06/19 21:59:27 by nfaivre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{

public:

	typedef typename std::stack<T>::container_type::iterator			iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator	reverse_iterator;

	MutantStack(void);
	MutantStack(const MutantStack<T> &otherInst);
	~MutantStack(void);

	MutantStack<T>	&operator=(const MutantStack<T> &otherInst);

	iterator			begin(void);
	iterator			end(void);
	reverse_iterator	rbegin(void);
	reverse_iterator	rend(void);

};

template <typename T>
MutantStack<T>::MutantStack(void)
: std::stack<T> ()
{
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &otherInst)
: std::stack<T> (otherInst)
{
}

template <typename T>
MutantStack<T>::~MutantStack(void)
{
}

template <typename T>
MutantStack<T>	&MutantStack<T>::operator=(const MutantStack<T> &otherInst)
{
	this->c = otherInst.c;
	return (*this);
}

template <typename T>
typename MutantStack<T>::iterator			MutantStack<T>::begin(void)
{
	return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator			MutantStack<T>::end(void)
{
	return (this->c.end());
}

template <typename T>
typename MutantStack<T>::reverse_iterator	MutantStack<T>::rbegin(void)
{
	return (this->c.rbegin());
}

template <typename T>
typename MutantStack<T>::reverse_iterator	MutantStack<T>::rend(void)
{
	return (this->c.rend());
}
