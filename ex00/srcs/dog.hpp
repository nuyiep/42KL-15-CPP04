/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 16:54:21 by plau              #+#    #+#             */
/*   Updated: 2023/04/29 19:09:22 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "animal.hpp"

class Dog : public Animal
{
	public:
		/* Orthodox canonical class form */
		Dog(void);
		~Dog(void);
		Dog(const Dog &src); //copy constructor
		Dog& operator=(const Dog& src); //assignment operator

		void	makeSound();
	private:	
};

#endif
