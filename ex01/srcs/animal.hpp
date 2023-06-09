/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 16:08:04 by plau              #+#    #+#             */
/*   Updated: 2023/05/06 18:03:37 by plau             ###   ########.fr       */
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
		Animal();
		virtual	~Animal();
		/* Needs to add virtual because your main is a pointer 
			otherwise, the derived class won't be deleted 
		*/
		/* 
		If a pointer points to a base class, 
		but the pointer points at runtime to a derived class, 
		then the base class must have a virtual destructor 
		in order to destruct the derived class. 
		Without the virtual destructor, 
		only the destructor for the base class will run.
		*/
		Animal(const Animal &src);
		Animal& operator=(const Animal& src); //assignment operator

		virtual void		makeSound() const;
		/* const for makeSound because in your main function Animal is a const */
		/* virtual - if no virtual, when you call j-makeSound(), it will invoke */
		/* 				the makeSound() from Animal, not Dog */
		/*			- allows the functions to be overridden in the derived classes */
		std::string	getType() const;
	protected:
		std::string type;
};

#endif
