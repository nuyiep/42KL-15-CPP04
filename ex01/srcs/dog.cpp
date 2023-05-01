/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 16:54:18 by plau              #+#    #+#             */
/*   Updated: 2023/05/01 19:40:33 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"

/* Default constructor */
Dog::Dog()
{
	this->type = "Dog";
	std::cout << "[Dog] Default constructor" << std::endl;
	this->brain = new Brain();
}

/* Destructor */
Dog::~Dog()
{
	std::cout << "[Dog] Destructor" << std::endl;
	delete (this->brain);
}

/* Copy constructor */
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

/* Copy assignment operator */
Dog& Dog::operator=(const Dog& src)
{
	std::cout << "[Dog] Assignment operator" << std::endl;
	if (this != &src)
	{
		this->type = src.type;
		this->brain = src.brain;
	}
	return (*this);
}

/* MakeSound function */
void	Dog::makeSound() const
{
	std::cout << MAGENTA << "[" << this->type << "]" << " barks" << RESET << std::endl;
}
