/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 15:33:20 by plau              #+#    #+#             */
/*   Updated: 2023/05/01 16:42:09 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		/* Orthodox canonical class form */
		WrongCat();
		~WrongCat();
		WrongCat(const WrongCat &src);//copy constructor
		WrongCat& operator=(const WrongCat &src);//copy assignment operator

		void	makeSound() const;
	private:
		
};

#endif
