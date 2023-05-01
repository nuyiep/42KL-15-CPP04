/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 16:10:36 by plau              #+#    #+#             */
/*   Updated: 2023/05/01 19:32:17 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"
#include "cat.hpp"

int main(void)
{
	{
		std::cout << "\n---------- EX01 Main ----------\n" << std::endl;
		const	Animal*	j = new Dog();

		delete j; //should not create a leak
		// const	Animal*	i = new Cat();
		// delete i;
	}
	return (0);
}
