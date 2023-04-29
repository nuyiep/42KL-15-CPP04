/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 17:25:29 by plau              #+#    #+#             */
/*   Updated: 2023/04/29 17:41:43 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"

Cat::Cat(void)
{
	std::cout << "[Cat] Default Constructor" << std::endl;
	this->type = "Cat";
}

Cat::~Cat(void)
{
	std::cout << "[Cat] Destructor" << std::endl;
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
	}
	return (*this);
}
