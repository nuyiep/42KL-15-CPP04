/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 15:33:11 by plau              #+#    #+#             */
/*   Updated: 2023/05/01 16:42:16 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "[WrongCat] Default constructor" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << "[WrongCat] Destructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src)
{
	std::cout << "[WrongCat] Copy Constructor" << std::endl;
	(*this) = src;
}

WrongCat& WrongCat::operator=(const WrongCat &src)
{
	std::cout << "[WrongCat] Copy Assignment Operator" << std::endl;
	if (this != &src) //address v address 
	{
		this->_type = src._type;
	}
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "WrongCat miao" << std::endl;
}

