/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 21:42:44 by plau              #+#    #+#             */
/*   Updated: 2023/05/04 14:27:50 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>

class AMateria
{
	public:
		/* Orthodox canonical class form */
		AMateria();
		~AMateria();
		AMateria(const AMateria& src);//copy constructor
		AMateria& operator=(const AMateria& src);//copy assignment operator
		
		/* Member functions */
		AMateria(std::string const &type); //name constructor
	protected:
		std::string		_type;
			
};

#endif
