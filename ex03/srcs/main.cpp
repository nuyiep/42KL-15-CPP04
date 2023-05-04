/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 21:40:57 by plau              #+#    #+#             */
/*   Updated: 2023/05/04 18:31:22 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

int main(void)
{
	{
		std::cout << "\n---------- EX01 Main ----------\n" << std::endl;
		IMateriaSource* src = new MateriaSource();
	// 	src->learnMateria(new Ice());
	// 	src->learnMateria(new Cure());

	// 	ICharacter* me = new Character("me");

	// 	AMateria* tmp;
	// 	tmp = src->createMateria("ice");
	// 	me->equip(tmp);
	// 	tmp = src->createMateria("cure");
	// 	me->equip(tmp);

	// 	ICharacter* bob = new Character("bob");

	// 	me->use(0, *bob);
	// 	me->use(1, *bob);

	// 	delete (bob);
	// 	delete (me);
	// 	delete (src);
	}
	return (0);
}
