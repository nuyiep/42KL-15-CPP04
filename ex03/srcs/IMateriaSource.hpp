/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:48:16 by plau              #+#    #+#             */
/*   Updated: 2023/05/04 16:51:55 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include <iostream>
class AMateria;

class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		virtual	void	learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const &type) = 0;
};

#endif 
