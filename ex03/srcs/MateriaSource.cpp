/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:57:09 by plau              #+#    #+#             */
/*   Updated: 2023/05/05 22:01:34 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->storedInventory[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (this->storedInventory[i] != NULL)
			delete this->storedInventory[i];
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	(*this) = src;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &src)
{
	const	AMateria	*temp;
	for (int i = 0; i < 4; i++)
	{
		if (this->storedInventory[i])
			delete storedInventory[i];
		temp = src.getMateria(i);
		if (temp != NULL)			
			this->storedInventory[i] = temp->clone();
		else
			this->storedInventory[i] = NULL;
	}
	return (*this);
}

/* Copy materia into inventory */
void	MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->storedInventory[i] == NULL)
		{
			this->storedInventory[i] = materia;
			break ;
		}
	}
	
}

/* Getter function */
const	AMateria *MateriaSource::getMateria(int i ) const
{
	if (i < 0 || i > 4)
		return (NULL);
	return (this->storedInventory[i]);
}

/* Returns a new Materia */
AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->storedInventory[i] == NULL)
			break ;
		if (this->storedInventory[i]->getType() == type)
			return (this->storedInventory[i]->clone());
	}
	return (0);
}
