/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:04:17 by plau              #+#    #+#             */
/*   Updated: 2023/05/05 20:35:42 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"


class Character : public ICharacter
{
	public: 
		/* Orthodox canonical class form */
		Character();
		~Character();
		Character(const Character &src);//copy constructor
		Character &operator=(const Character &src);//copy assignment operator

		/* Member function (required in pdf) */
		std::string const 	&getName() const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
		Character(std::string name);

	private:
		std::string 	_name;
		AMateria		*_inventory[4];
		
		/* Helper functions */
		void			init_inventory();
		void			delete_inventory();
};

#endif
