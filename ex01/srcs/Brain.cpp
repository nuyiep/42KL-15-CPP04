/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 16:53:34 by plau              #+#    #+#             */
/*   Updated: 2023/05/01 18:14:38 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/* Default constructor */
Brain::Brain()
{
	std::cout << MAGENTA << "[Brain] Default Constructor" << RESET << std::endl;
}

/* Destructor */
Brain::~Brain()
{
	std::cout << MAGENTA << "[Brain] Destructor" << RESET << std::endl;
}

/* Copy constructor */
Brain::Brain(const Brain &src)
{
	(*this) = src;	
}

/* Copy assignment operator */
Brain& Brain::operator=(const Brain &src)
{
	if (this != &src) //address v address
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = src._ideas[i];
	}
	return (*this);
}
