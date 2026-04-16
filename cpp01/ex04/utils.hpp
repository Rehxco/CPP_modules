/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrochar <sbrochar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 19:45:16 by sbrochar          #+#    #+#             */
/*   Updated: 2026/03/11 11:00:43 by sbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP
# include <fstream>
# include <iostream>
# include <string>

size_t	search(std::string s1, std::string str, size_t pos);
std::string replace(std::string s1, std::string s2, std::string str);

#endif