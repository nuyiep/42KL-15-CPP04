/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 17:25:34 by plau              #+#    #+#             */
/*   Updated: 2023/05/01 15:30:11 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "animal.hpp"

class Cat : public Animal
{
	public:
		/* Orthodox canonical class form */
		Cat();
		~Cat();
		Cat(const Cat &src);
		Cat& operator=(const Cat& src);

		void	makeSound() const;
	private:
};

#endif
