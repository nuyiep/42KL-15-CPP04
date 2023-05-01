/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 16:53:39 by plau              #+#    #+#             */
/*   Updated: 2023/05/01 18:14:01 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include "colour.hpp"

class Brain
{
	public:
		/* Orthodox canonical form */
		Brain();
		~Brain();
		Brain(const Brain &src);//copy constructor
		Brain& operator=(const Brain &src);//copy assignment operator
	private:
		std::string _ideas[100];
};

#endif 
