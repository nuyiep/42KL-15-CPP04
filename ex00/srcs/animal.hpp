/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 16:08:04 by plau              #+#    #+#             */
/*   Updated: 2023/04/29 18:59:06 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include "colour.hpp"
class Animal
{
	public:
		/* orthodox canonical class form */
		Animal(void);
		~Animal(void);
		Animal(const Animal &src);
		Animal& operator=(const Animal& src); //assignment operator

		virtual void makeSound();
	protected:
		std::string type;
};

#endif
