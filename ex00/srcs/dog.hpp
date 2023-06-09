/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 16:54:21 by plau              #+#    #+#             */
/*   Updated: 2023/05/06 13:50:49 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "animal.hpp"

class Dog : public Animal
{
	public:
		/* Orthodox canonical class form */
		Dog();
		~Dog();
		Dog(const Dog &src); //copy constructor
		Dog& operator=(const Dog& src); //assignment operator

		void	makeSound() const;
	private:	
};

#endif
