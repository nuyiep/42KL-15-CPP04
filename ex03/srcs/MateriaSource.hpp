/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:57:01 by plau              #+#    #+#             */
/*   Updated: 2023/05/05 21:34:25 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		/* Orthodox canonical class form */
		MateriaSource();
		~MateriaSource();
		MateriaSource(const MateriaSource &src);
		MateriaSource& operator=(const MateriaSource &src);
		
		/* Member function (required by pdf) */
		void		learnMateria(AMateria *materia);
		AMateria	*createMateria(std::string const& type);
		
		/* Getter function */
		const	AMateria	*getMateria(int i) const;
		// return type is a pointer to a const 
		// that pointer cannot be used to modify 
		// the AMateria object it points to
		// returns a const pointer to the AMateria object 
	private:
		AMateria	*storedInventory[4];
};

#endif 
