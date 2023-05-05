/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 21:42:44 by plau              #+#    #+#             */
/*   Updated: 2023/05/05 14:11:23 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;
class AMateria
{
	public:
		/* Orthodox canonical class form */
		AMateria();
		virtual 	~AMateria();
		AMateria(const AMateria& src);
		AMateria	&operator=(const AMateria& src);
		
		/* Member functions */
		AMateria(std::string const &type);
		std::string	const& 	getType() const; //returns the material type
		virtual	AMateria* 	clone() const = 0; //An abstract class
		virtual	void	use(ICharacter& target);
	protected:
		std::string		_type;
};

#endif
