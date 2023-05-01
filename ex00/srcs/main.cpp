/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 16:10:36 by plau              #+#    #+#             */
/*   Updated: 2023/05/01 15:30:26 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"
#include "cat.hpp"

int main(void)
{
	// {
	// 	Animal a;
	// 	// Animal b(a);
	// 	a.makeSound();
		
	// 	Dog c;
	// 	// Dog d(c);
	// 	c.makeSound();

	// 	Cat e;
	// 	// Cat f(e);
	// 	e.makeSound();
	// }
	{
		std::cout << "\n---------- EX00 Main ----------\n" << std::endl;
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();
		delete (meta);
		delete (j);
		delete (i);
	}
}
