/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 16:54:21 by plau              #+#    #+#             */
/*   Updated: 2023/05/01 19:39:06 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
		/* Orthodox canonical class form */
		Dog();
		~Dog(void);
		Dog(const Dog &src); //copy constructor
		Dog& operator=(const Dog& src); //assignment operator

		/* Member functions */
		void	makeSound() const;
	private:
		Brain	*brain;
};

#endif
