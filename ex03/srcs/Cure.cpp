/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:24:59 by plau              #+#    #+#             */
/*   Updated: 2023/05/05 22:06:37 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	this->_type = "cure";
}

Cure::~Cure()
{
}

Cure::Cure(const Cure& src)
{
	(*this) = src;
}

Cure& Cure::operator=(const Cure& src)
{
	this->_type = src.getType();
	return (*this);
}

/* Clone function to create a copy of Cure */
AMateria* Cure::clone() const
{
	AMateria *newCure = new Cure;
	return (newCure);	
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << " 's wounds" << std::endl;
}
