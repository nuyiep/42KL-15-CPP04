/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:24:59 by plau              #+#    #+#             */
/*   Updated: 2023/05/04 15:57:26 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	std::cout << "[Cure] Default constructor" << std::endl;
	this->_type = "cure";
}

Cure::~Cure()
{
	std::cout << "[Cure] Destructor" << std::endl;
}

Cure::Cure(const Cure& src)
{
	std::cout << "[Cure] Copy constructor" << std::endl;
	(*this) = src;
}

Cure& Cure::operator=(const Cure& src)
{
	std::cout << "[Cure] Copy assignment operator" << std::endl;
	this->_type = src.getType();
	return (*this);
}

/* Clone function to create a copy of Cure */
AMateria* Cure::clone() const
{
	std::cout << "[Cure] Clone" << std::endl;
	AMateria *newCure = new Cure;
	return (newCure);	
}


