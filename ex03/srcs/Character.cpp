/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:03:33 by plau              #+#    #+#             */
/*   Updated: 2023/05/05 22:07:15 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	this->_name = "Unnamed";
	init_inventory();
}

Character::~Character()
{
	delete_inventory();
}

Character::Character(const Character &src)
{
	(*this) = src;
}

Character &Character::operator=(const Character &src)
{
	this->_name = src._name;
	delete_inventory();
	for (int i = 0; i < 4; i++)
	{
		if (src._inventory[i])
			this->_inventory[i] = src._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
	return (*this);
}

std::string const& Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria* m)
{
	if (!m)
	{
		std::cout << "Unable to equip an unexisting Materia" << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			// shallow copy
			// any changes on m would be reflected here
			// since m is only an abstract, is ok
			return ;
		}
	}
	std::cout << "Unable to add a Materia to a full inventory" << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4 || !this->_inventory[idx])
	{
		std::cout << "Unexisting Materia" << std::endl;
		return ;
	}
	delete this->_inventory[idx];
	this->_inventory[idx] = NULL;
}

/* Use the Materia at the slot[idx] */
/* Pass the target parameter to the AMateria::use function */
void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= 4 || this->_inventory[idx] == NULL)
	{
		std::cout << "Inventory doesn't exist" << std::endl;
		return ;
	}
	this->_inventory[idx]->use(target);
}

Character::Character(std::string name)
{
	this->_name = name;
	init_inventory();
}

/* Helper functions */
void	Character::init_inventory()
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

void	Character::delete_inventory()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete _inventory[i];
	}	
}
