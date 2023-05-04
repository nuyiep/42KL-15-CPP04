/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:25:02 by plau              #+#    #+#             */
/*   Updated: 2023/05/04 18:39:21 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		/* Orthodox canonical class form */
		Cure();
		~Cure();
		Cure(const Cure& src);
		Cure& operator=(const Cure& src);

		/* Member function */
		AMateria* 	clone() const;
		void		use(ICharacter& target);
	private:	
};

#endif
