/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:04:17 by plau              #+#    #+#             */
/*   Updated: 2023/05/04 17:21:50 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"

class Character
{
	public: 
		/* Orthodox canonical class form */
		Character();
		~Character();
		Character(const Character &src);//copy constructor
		Character &operator=(const Character &src);//copy assignment operator

		/* Member function (same as ICharacter) */
		std::string const 	&getName() const;
		void				equip(AMateria* m);
	private:
		std::string 	_name;
};

#endif
