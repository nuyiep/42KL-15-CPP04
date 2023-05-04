/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:56:40 by plau              #+#    #+#             */
/*   Updated: 2023/05/04 18:04:24 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	std::cout << "[Ice] Default constructor" << std::endl;
	this->_type = "ice";
}

Ice::~Ice()
{
	std::cout << "[Ice] Destructor" << std::endl;
}

Ice::Ice(const Ice& src)
{
	std::cout << "[Ice] Copy constructor" << std::endl;
	(*this) = src;
}

Ice& Ice::operator=(const Ice& src)
{
	std::cout << "[Ice] Copy assignment operator" << std::endl;
	this->_type = src.getType();
	return (*this);
}

AMateria *Ice::clone() const
{
	std::cout << "[Ice] Clone" << std::endl;
	AMateria *newIce = new Ice;
	return (newIce);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
