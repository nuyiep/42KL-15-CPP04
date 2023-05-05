/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:56:40 by plau              #+#    #+#             */
/*   Updated: 2023/05/05 22:06:27 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	this->_type = "ice";
}

Ice::~Ice()
{
}

Ice::Ice(const Ice& src)
{
	(*this) = src;
}

Ice& Ice::operator=(const Ice& src)
{
	this->_type = src.getType();
	return (*this);
}

AMateria *Ice::clone() const
{
	AMateria *newIce = new Ice;
	return (newIce);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
