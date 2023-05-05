/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 21:42:47 by plau              #+#    #+#             */
/*   Updated: 2023/05/05 14:24:58 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "[AMateria] Default constructor" << std::endl;
	this->_type = "AMateria";
}

AMateria::~AMateria()
{
	std::cout << "[AMateria] Destructor" << std::endl;
}

AMateria::AMateria(const AMateria& src)
{
	std::cout << "[AMateria] Copy constructor" << std::endl;
	(*this) = src;
}

AMateria& AMateria::operator=(const AMateria& src)
{
	std::cout << "[AMateria] Copy assignment operator" << std::endl;
	this->_type = src._type;
	return (*this);
}

AMateria::AMateria(std::string const &type)
{
	std::cout << "[AMateria] Type Constructor" << std::endl;
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
