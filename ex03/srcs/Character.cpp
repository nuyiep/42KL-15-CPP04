/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:03:33 by plau              #+#    #+#             */
/*   Updated: 2023/05/04 17:10:46 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	std::cout << "[Character] Default constructor" << std::endl;
}

Character::~Character()
{
	std::cout << "[Character] Destructor" << std::endl;
}

Character::Character(const Character &src)
{
	std::cout << "[Character] Copy constructor" << std::endl;
	(*this) = src;
}

Character &Character::operator=(const Character &src)
{
	std::cout << "[Character] Copy assignment operator" << std::endl;
	(void)src;
	return (*this);
}

std::string const& Character::getName() const
{
	return (this->_name);
}
