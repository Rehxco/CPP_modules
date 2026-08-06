/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 17:03:09 by sbrochar          #+#    #+#             */
/*   Updated: 2026/08/06 12:44:12 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <exception>
# include <iostream>
template <typename T> class Array
{
  public:
	Array();
	Array(Array const &other);
	Array(unsigned int len);
	~Array();
	Array &operator=(Array const &other);
	unsigned int size() const;
	T &operator[](unsigned int index);
	const T &operator[](unsigned int index) const;
	class OutOfBoundsException : public std::exception
	{
		public:
		virtual const char *what() const throw();
	};

  private:
	T *ptr;
	unsigned int len;
};

template <typename T> Array<T>::Array(Array const &other)
{
	std::cout << "Copy constructor called" << std::endl;
	len = other.len;
	ptr = new T[len]();
	for (unsigned int i = 0; i < len; i++)
		ptr[i] = other.ptr[i];
}
template <typename T> Array<T>::Array()
{
	std::cout << "Default constructor called" << std::endl;
	ptr = NULL;
	len = 0;
}
template <typename T>

Array<T>::~Array()
{
	std::cout << "Destructor called" << std::endl;
	delete[] ptr;
}
template <typename T>

Array<T> &Array<T>::operator=(Array const &other)
{
	if (this != &other)
	{
		std::cout << "Copy assignment operator called" << std::endl;
		delete[] ptr;
		len = other.len;
		ptr = new T[len]();
		for (unsigned int i = 0; i < len; i++)
			ptr[i] = other.ptr[i];
	}
	return (*this);
}
template <typename T> Array<T>::Array(unsigned int n)
{
	len = n;
	ptr = new T[n]();
}
template <typename T> unsigned int Array<T>::size() const
{
	return (len);
}
template <typename T> T &Array<T>::operator[](unsigned int index)
{
	if (index >= len)
		throw OutOfBoundsException();
	return (ptr[index]);
}
template <typename T> const T &Array<T>::operator[](unsigned int index) const
{
	if (index >= len)
		throw OutOfBoundsException();
	return (ptr[index]);
}
template <typename T> const char *Array<T>::OutOfBoundsException::what() const throw()
{
	return ("Error: Index out of array bounds");
}

#endif