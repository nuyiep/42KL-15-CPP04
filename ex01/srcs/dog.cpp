/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 16:54:18 by plau              #+#    #+#             */
/*   Updated: 2023/05/01 15:18:10 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"

Dog::Dog()
{
	std::cout << "[Dog] Default constructor" << std::endl;
	this->type = "Dog";
}

Dog::~Dog()
{
	std::cout << "[Dog] Destructor" << std::endl;
}

Dog::Dog(const Dog &src)
{
	std::cout << "[Dog] Copy constructor" << std::endl;
	(*this) = src;
	/** The expression "(*this)" dereferences the "this" pointer 
	to access the current object, and the assignment 
	operation "=" assigns the value of the "src" object 
	to the current object. After the assignment is complete, 
	the function returns a reference to 
	the current object to allow for chaining of assignments. **/
}

Dog& Dog::operator=(const Dog& src)
{
	std::cout << "[Dog] Assignment operator" << std::endl;
	if (this != &src)
	{
		this->type = src.type;
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << MAGENTA << "[" << this->type << "]" << " barks" << RESET << std::endl;
}
