/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student42abudhabi.ae>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:12:17 by zsyyida           #+#    #+#             */
/*   Updated: 2023/12/11 15:26:15 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>

# define RED "\033[0;31m"
# define GREEN "\033[38:5:2m"
# define BLUE    "\033[34m"
# define YELLOW  "\033[33m"
# define RESET "\033[0m"

template<typename T, typename Container = std::map<const Key, T> value_type>
class BitcoinExchange :public std::map<const Key, T>
{
	public:
		BitcoinExchange();
		BitcoinExchange(Container C);
		BitcoinExchange(const BitcoinExchange &object);
		BitcoinExchange &operator=(const BitcoinExchange &object);
		~BitcoinExchange();
};

#endif