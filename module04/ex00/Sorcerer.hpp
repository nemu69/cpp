/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage-l <nepage-l@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 14:26:58 by nepage-l          #+#    #+#             */
/*   Updated: 2021/01/16 13:04:36 by nepage-l         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef Sorcerer_HPP
# define Sorcerer_HPP
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string.h>
#include <ctime>
#include <cstdlib>
#include "Victim.hpp"

class Sorcerer
{
	public :

  		Sorcerer(std::string name, std::string titre);
  		virtual ~Sorcerer();
  		Sorcerer(Sorcerer &o);
  		Sorcerer&operator=(const Sorcerer &o) // Operator d'affectation
			{
				titre = o.getTitre();
				name = o.getName();
				return (*this);
			};

  		std::string getName() const;
  		std::string getTitre() const;

  		int set_Sorcerer();

  		virtual void polymorph(Victim const &) const;

  	private :
		Sorcerer();
		std::string titre;
		std::string name;
};

std::ostream &operator<<(std::ostream &o, Sorcerer const &rhs);

#endif
