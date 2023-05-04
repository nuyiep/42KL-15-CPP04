/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:57:09 by plau              #+#    #+#             */
/*   Updated: 2023/05/04 17:02:26 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "[MateriaSource] Default Constructor" << std::endl;
}

MateriaSource::~MateriaSource()
{
	std::cout << "[MateriaSource] Destructor" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	std::cout << "[MateriaSource] Copy constructor" << std::endl;
	(*this) = src;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &src)
{
	std::cout << "[MateriaSource] Copy assignment operator" << std::endl;
}

