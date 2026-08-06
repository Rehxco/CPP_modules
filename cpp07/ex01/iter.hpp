/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 17:03:09 by sbrochar          #+#    #+#             */
/*   Updated: 2026/08/05 22:13:24 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template <typename T> void iter(T *begin, unsigned int len, void (*f)(T &))
{
	for (unsigned int i = 0; i < len; i++)
	{
		f(begin[i]);
	}
}

#endif