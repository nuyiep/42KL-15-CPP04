/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 17:25:29 by plau              #+#    #+#             */
/*   Updated: 2023/05/03 17:15:21 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"

Cat::Cat(void)
{
	std::cout << "[Cat] Default Constructor" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::~Cat(void)
{
	std::cout << "[Cat] Destructor" << std::endl;
	delete this->brain;
}

Cat::Cat(const Cat &src)
{
	std::cout << "[Cat] Copy Constructor" << std::endl;
	(*this) = src;
}

Cat& Cat::operator=(const Cat& src)
{
	std::cout << "[Cat] Assignment operator" << std::endl;
	if (this != &src)
	{
		this->type = src.type;
		*this->brain = *(src.brain); //deep copy
		// this->brain = src.brain; //shallow copy
		// if want to use shallow copy, 
		// need to remove at cat destructor the delete brain
		// otherwise will have malloc error
	}
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << MAGENTA << "[" << this->type << "]" << " miao" << RESET << std::endl;
}

void	Cat::setBrainIdea(int i, std::string newIdea)
{
	this->brain->setBrainIdea(i, newIdea);
}

const	std::string &Cat::getBrainIdea(int i) const
{
	return (this->brain->getBrainIdea(i));	
}
