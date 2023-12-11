/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student42abudhabi.ae>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:17:57 by zsyyida           #+#    #+#             */
/*   Updated: 2023/12/11 15:42:13 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <list>
#include <vector>

# define RED "\033[0;31m"
# define GREEN "\033[38:5:2m"
# define BLUE    "\033[34m"
# define YELLOW  "\033[33m"
# define RESET "\033[0m"

template<typename T, typename Container = std::vector<T> >
class PmergeMe :public std::vector<T>
{
	public:
		PmergeMe();
		PmergeMe(Container C);
		PmergeMe(const PmergeMe &object);
		PmergeMe &operator=(const PmergeMe &object);
		~PmergeMe();
};
#endif