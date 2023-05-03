/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 16:10:36 by plau              #+#    #+#             */
/*   Updated: 2023/05/03 16:03:44 by plau             ###   ########.fr       */
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
	
	/* Deep copy- different address */
	// {
	// 	std::cout << "\n---------- EX01 (Copy assignment) tests ----------\n" << std::endl;
	// 	Dog	dog1;
	// 	Dog dog2;

	// 	dog1.setBrainIdea(8, "I am a dog");
	// 	dog2 = dog1;
	// 	dog1.setBrainIdea(1, "something");
	// 	const std::string idea = dog1.getBrainIdea(1);
	// 	std::cout << GREEN << "Dog1 idea: " << idea << RESET << std::endl;
	// 	std::cout << GREEN << "Dog1 idea address: " << &idea << RESET << std::endl;
		
	// 	const std::string idea2 = dog2.getBrainIdea(8);
	// 	std::cout << YELLOW << "Dog2 idea: " << idea2 << RESET << std::endl;
	// 	std::cout << YELLOW << "Dog2 idea address: " << &idea2 << RESET << std::endl;
	// }
	
	/* Deep copy- different address */
	{
		std::cout << "\n---------- EX01 (Copy constructor) tests ----------\n" << std::endl;
		Dog	dog1;
		dog1.setBrainIdea(9, "the Dog Returned");
		Dog dog2(dog1);

		//const std::string idea = dog1.getBrainIdea(9); 
		//use this because previously getter function without &- can't get it directly
		std::cout << GREEN << "Dog1 idea: " << dog1.getBrainIdea(9) << RESET << std::endl;
		std::cout << GREEN << "Dog1 idea address: " << &(dog1.getBrainIdea(9)) << RESET << std::endl;
		
		std::cout << YELLOW << "Dog2 idea: " << dog2.getBrainIdea(9) << RESET << std::endl;
		std::cout << YELLOW << "Dog2 idea address: " << &(dog2.getBrainIdea(9)) << RESET << std::endl;

		dog1.setBrainIdea(9, "Changed content");
		std::cout << GREEN << "Dog1 idea: " << dog1.getBrainIdea(9) << RESET << std::endl;
		std::cout << YELLOW << "Dog2 idea: " << dog2.getBrainIdea(9) << RESET << std::endl;
	}
	
	// std::cout << "\n----------Leaks Check----------\n" << std::endl;
	// system("leaks -q onFire");
	return (0);
}
