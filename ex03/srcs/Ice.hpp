/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:53:46 by plau              #+#    #+#             */
/*   Updated: 2023/05/04 18:01:37 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		/* Orthodox canonical class form */
		Ice();
		~Ice();
		Ice(const Ice& src);//copy constructor
		Ice& operator=(const Ice& src);//copy assignment operator

		/* Member function */
		AMateria *clone() const;
		void	use(ICharacter&	target);
};

#endif
