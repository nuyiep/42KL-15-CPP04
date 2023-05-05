/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 21:42:47 by plau              #+#    #+#             */
/*   Updated: 2023/05/05 22:05:06 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	this->_type = "AMateria";
}

AMateria::~AMateria()
{
}

AMateria::AMateria(const AMateria& src)
{
	(*this) = src;
}

AMateria& AMateria::operator=(const AMateria& src)
{
	this->_type = src._type;
	return (*this);
}

AMateria::AMateria(std::string const &type)
{
	this->_type = type;
}

std::string const& AMateria::getType() const
{
	return (this->_type);
}

void	AMateria::use(ICharacter &target)
{
	std::cout << target.getName() << " [AMateria]" << std::endl;
}
