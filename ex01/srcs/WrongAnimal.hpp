/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 15:34:08 by plau              #+#    #+#             */
/*   Updated: 2023/05/01 16:41:59 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	public:
		/* Orthodox Canonical class form */
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal(const WrongAnimal &src); //copy constructor
		/* const- good practice
					ensure that the copy constructor does not modify
					the source object 
		*/
		WrongAnimal& operator=(const WrongAnimal &src);// copy assignment operator

		std::string 		getType() const;
		void				makeSound() const;
	protected:
		std::string _type;
};

#endif
