/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 17:25:34 by plau              #+#    #+#             */
/*   Updated: 2023/04/29 19:13:01 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "animal.hpp"

class Cat : public Animal
{
	public:
		/* Orthodox canonical class form */
		Cat(void);
		~Cat(void);
		Cat(const Cat &src);
		Cat& operator=(const Cat& src);

		void	makeSound();
	private:
};

#endif
