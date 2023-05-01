/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 17:25:34 by plau              #+#    #+#             */
/*   Updated: 2023/05/01 18:21:51 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "animal.hpp"
#include "Brain.hpp"

class Cat : public Animal, public Brain
{
	public:
		/* Orthodox canonical class form */
		Cat();
		~Cat();
		Cat(const Cat &src);
		Cat& operator=(const Cat& src);

		void	makeSound() const;
	private:
		Brain	*brain;
};

#endif
