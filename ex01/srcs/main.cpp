/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 16:10:36 by plau              #+#    #+#             */
/*   Updated: 2023/05/01 21:35:47 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"
#include "cat.hpp"

int main(void)
{
	// {
	// 	std::cout << "\n---------- EX01 Main ----------\n" << std::endl;
	// 	const	Animal*	j = new Dog();

	// 	const	Animal*	i = new Cat();
	// 	delete j; //should not create a leak
	// 	delete i;
	// }
	// {
	// 	std::cout << "\n---------- EX01 Additional tests ----------\n" << std::endl;
	// 	Animal *a[4];
	// 	for (int i = 0; i < 2; i++)
	// 		a[i] = new Dog();
	// 	for (int i = 2; i < 4; i++)
	// 		a[i] = new Cat();
	// 	for (int i = 0; i < 4; i++)
	// 		delete a[i];
	// }
	
	{
		std::cout << "\n---------- EX01 Deep copy tests ----------\n" << std::endl;
		
	}
	
	// std::cout << "\n----------Leaks Check----------\n" << std::endl;
	// system("leaks -q onFire");
	return (0);
}
