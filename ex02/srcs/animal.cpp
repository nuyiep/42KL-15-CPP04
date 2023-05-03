/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 16:09:20 by plau              #+#    #+#             */
/*   Updated: 2023/05/03 21:08:58 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

/* Default constructor function of Animal class */
Animal::Animal(void)
{
	std::cout << "[Animal] Default constructor" << std::endl;
	this->type = "Animal";
}

/* Destructor function of Animal class */
Animal::~Animal(void)
{
	std::cout << "[Animal] Destructor" << std::endl;
}

/* Copy constructor function of Animal class */
Animal::Animal(const Animal &src)
{
	std::cout << "[Animal] Copy constructor" << std::endl;
	(*this) = src;
}

/* Copy assignment operator function of Animal class */
Animal& Animal::operator=(const Animal& src)
{
	std::cout << "[Animal] Assignment operator" << std::endl;
	if (this != &src)//address of this v address of src
	{
		this->type = src.type;
	}
	return (*this);
}

/* Commented it out to make it an abstract class */
/* MakeSound function of Animal class */
// void	Animal::makeSound() const
// {
// 	std::cout << MAGENTA << "[" << this->type << "] does not make sound" 
// 		<< RESET <<std::endl;
// }

/* Getter function for the type of Animal class */
std::string	Animal::getType() const
{
	return (this->type);
}
