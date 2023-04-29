/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 16:09:20 by plau              #+#    #+#             */
/*   Updated: 2023/04/29 16:41:27 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

Animal::Animal(void)
{
	std::cout << "[Animal] Default constructor" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "[Animal] Destructor" << std::endl;
}

Animal::Animal(const Animal &src)
{
	std::cout << "[Animal] Copy constructor" << std::endl;
	(*this) = src;
}

Animal& Animal::operator=(const Animal& src)
{
	std::cout << "[Animal] Assignment operator" << std::endl;
	if (this != &src)//address of this v address of src
	{
		this->type = src.type;
	}
	return (*this);
}
