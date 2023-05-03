/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 15:33:52 by plau              #+#    #+#             */
/*   Updated: 2023/05/01 16:42:39 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/* Default constructor */
WrongAnimal::WrongAnimal()
{
	std::cout << "[WrongAnimal] Default constructor" << std::endl;
	this->_type = "WrongAnimal";
}

/* Destructor */
WrongAnimal::~WrongAnimal()
{
	std::cout << "[WrongAnimal] Destructor for " << this->_type << std::endl;
}

/* Copy constructor */
WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	std::cout << "[WrongAnimal] Copy constructor" << std::endl;
	(*this) = src;
}

/* Copy assignment operator */
WrongAnimal& WrongAnimal::operator=(const WrongAnimal &src)
{
	std::cout << "[WrongAnimal] Assignment operator" << std::endl;
	if (this != &src) // address v address
	{
		this->_type = src._type;
	}
	return (*this);
}

/* Getter function */
std::string WrongAnimal::getType() const
{
	return (this->_type);
}

/* Make Sound function */
void	WrongAnimal::makeSound() const
{
	std::cout << this->_type << " doesn't make any sound" << std::endl; 
}
