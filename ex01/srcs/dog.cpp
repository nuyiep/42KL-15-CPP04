/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 16:54:18 by plau              #+#    #+#             */
/*   Updated: 2023/05/06 15:58:09 by plau             ###   ########.fr       */
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
	// printf("%p", (void *)this->brain);
	delete (this->brain);
}

/* Copy constructor */
/* Has to be a deep copy */
Dog::Dog(const Dog &src)
{
	std::cout << "[Dog] Copy constructor" << std::endl;
	this->brain = new Brain; 
	//if this is removed will seg fault- because no brain has been created
	(*this) = src;
	/** The expression "(*this)" dereferences the "this" pointer 
	to access the current object, and the assignment 
	operation "=" assigns the value of the "src" object 
	to the current object. After the assignment is complete, 
	the function returns a reference to 
	the current object to allow for chaining of assignments. **/
}

/* Copy assignment operator */
/* 1- *this->brain = *(src.brain)
		- Deep copy of the Brain object
		- content of the Brain object pointed to by 
			this->brain are overwritten
		- prefered with dynamically allocated memory as
			this ensures that the copies are independent 
	2- this->brain = src.brain;
		- Shallow copy of the Brain object
*/
Dog& Dog::operator=(const Dog& src)
{
	std::cout << RED << "[Dog] Assignment operator" << RESET << std::endl;
	if (this != &src)
	{
		this->type = src.type;
		//shouldn't have new Brain here because we have already 
		//constructed new Brain at default constructor
		// *this->brain = *(src.brain); //deep copy
		this->brain = src.brain; //shallow copy
	}
	return (*this);
}

/* MakeSound function */
void	Dog::makeSound() const
{
	std::cout << MAGENTA << "[" << this->type << "]" << " barks" << RESET << std::endl;
}

/* Setter function for Brain's idea of Dog class */
/* Need this because Brain is a private variable in Dog class */
void	Dog::setBrainIdea(int i, std::string newIdea)
{
	this->brain->setBrainIdea(i, newIdea);
}

/* Getter function for Brain's idea of Dog class */
/* Need this because Brain is a private variable in Dog class */
const std::string &Dog::getBrainIdea(int i) const
{
	return (this->brain->getBrainIdea(i));
}
