/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 16:53:39 by plau              #+#    #+#             */
/*   Updated: 2023/05/03 14:25:01 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include "colour.hpp"

class Brain
{
	public:
		/* Orthodox canonical form */
		Brain();
		~Brain();
		Brain(const Brain &src);//copy constructor
		Brain& operator=(const Brain &src);//copy assignment operator
		
		void		setBrainIdea(int i, std::string newIdea);
		const std::string	&getBrainIdea(int i) const;
	private:
		std::string _ideas[100];
};

#endif 
