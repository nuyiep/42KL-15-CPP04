/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:04:17 by plau              #+#    #+#             */
/*   Updated: 2023/05/04 16:25:51 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>

class Character
{
	public: 
		/* Orthodox canonical class form */
		Character();
		~Character();
		Character(const Character &src);//copy constructor
		Character &operator=(const Character &src);//copy assignment operator
	private: 
};

#endif
