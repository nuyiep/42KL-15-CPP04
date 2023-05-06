/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 16:10:36 by plau              #+#    #+#             */
/*   Updated: 2023/05/06 18:01:38 by plau             ###   ########.fr       */
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
	// 	system("leaks -q onFire");
	// }

	/* Deep copy- different addresses */
	/* Shallow copy for copy assignment test will be different because at default constructor, */
	/*  	we have created using "new" two different Brain */
	// {
	// 	std::cout << "\n---------- EX01 Dog (Copy assignment) tests ----------\n" << std::endl;
	// 	Dog	dog1;
	// 	Dog dog2;

	// 	dog1.setBrainIdea(8, "I am a dog");
	// 	dog2 = dog1;
	// 	dog1.setBrainIdea(8, "something");
	// 	const std::string idea = dog1.getBrainIdea(8);
	// 	std::cout << GREEN << "Dog1 idea: " << idea << RESET << std::endl;
	// 	std::cout << GREEN << "Dog1 idea address: " << &idea << RESET << std::endl;
		
	// 	const std::string idea2 = dog2.getBrainIdea(8);
	// 	std::cout << YELLOW << "Dog2 idea: " << idea2 << RESET << std::endl;
	// 	std::cout << YELLOW << "Dog2 idea address: " << &idea2 << RESET << std::endl;
	// }
	
	/* Deep copy- different addresses */
	/* Shallow copy- same address */
	{
		std::cout << "\n---------- EX01 Dog (Copy constructor) tests ----------\n" << std::endl;
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

		std::cout << YELLOW << "Dog2 idea: " << dog2.getBrainIdea(9) << RESET << std::endl;
		std::cout << YELLOW << "Dog2 idea address: " << &(dog2.getBrainIdea(9)) << RESET << std::endl;
	}
	
	/* Cats */

	// {
	// 	std::cout << "\n---------- EX01 Cat (Copy assignment) tests ----------\n" << std::endl;
	// 	Cat	cat1;
	// 	Cat cat2;

	// 	cat1.setBrainIdea(99, "Nezuko");
	// 	cat2 = cat1;
	// 	cat1.setBrainIdea(99, "Inosuke");
	// 	std::cout << "Cat1 idea: " << cat1.getBrainIdea(99) << std::endl;
		//should print Inosuke
		// std::cout << "Cat2 idea: " << cat2.getBrainIdea(99) << std::endl;
		//should print Nezuko
		// std::cout << "Cat1 idea address: " << &(cat1.getBrainIdea(99)) << std::endl;
		// std::cout << "Cat2 idea address: " << &(cat2.getBrainIdea(99)) << std::endl;
		// same address if is shallow copy
		// different address if is deep copy
		//change at assignment operator to shallow or deep
	// }
	
	// {
	// 	std::cout << "\n---------- EX01 Cat (Copy constructor) tests ----------\n" << std::endl;
	// 	Cat cat1;
	// 	cat1.setBrainIdea(55, "Demon Slayer");
	// 	Cat cat2(cat1);
	// 	cat1.setBrainIdea(55, "Winne the Pooh");
	// 	std::cout << "Cat1 idea = " << cat1.getBrainIdea(55) << std::endl;
	// 	std::cout << "Cat2 idea = " << cat2.getBrainIdea(55) << std::endl;
	// 	std::cout << "Cat1 idea address = " << &(cat1.getBrainIdea(55)) << std::endl;
	// 	std::cout << "Cat2 idea address = " << &(cat2.getBrainIdea(55)) << std::endl;
		
	// }

	// std::cout << "\n----------Leaks Check----------\n" << std::endl;
	// system("leaks -q onFire");
	// return (0);
}
