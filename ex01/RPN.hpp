/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student42abudhabi.ae>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:15:31 by zsyyida           #+#    #+#             */
/*   Updated: 2023/12/11 15:36:37 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <deque>

# define RED "\033[0;31m"
# define GREEN "\033[38:5:2m"
# define BLUE    "\033[34m"
# define YELLOW  "\033[33m"
# define RESET "\033[0m"

template<typename T, typename Container = std::deque<T> >
class RPN :public std::deque<T>
{
	public:
		RPN();
		RPN(Container C);
		RPN(const RPN &object);
		RPN &operator=(const RPN &object);
		~RPN();
};
#endif