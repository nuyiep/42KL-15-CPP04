/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 16:53:34 by plau              #+#    #+#             */
/*   Updated: 2023/05/03 14:24:56 by plau             ###   ########.fr       */
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
	std::cout << "called" <<std::endl;
	if (this != &src) //address v address
	{
		for (int i = 0; i < 100; i++)
			this->setBrainIdea(i, src.getBrainIdea(i));
	}
	return (*this);
}

/* Setter function for Brain class */
void	Brain::setBrainIdea(int i, std::string newIdea)
{
	if (i < 0 || i >= 100)
	{
		std::cout << RED << "Input number is out of range" << RESET << std::endl;
		EXIT_FAILURE;
	}
	this->_ideas[i] = newIdea;
}

/* Getter function for Brain class */
const std::string	&Brain::getBrainIdea(int i) const
{
	if (i < 0 || i >= 100)
	{
		std::cout << RED << "Input number is out of range" << RESET << std::endl;
		EXIT_FAILURE;
	}
	return (this->_ideas[i]);
}
