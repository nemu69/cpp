/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    SuperTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage-l <nepage-l@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 08:48:55 by nepage-l          #+#    #+#             */
/*   Updated: 2020/02/23 22:15:42 by nepage-l         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef  SuperTrap_HPP
# define  SuperTrap_HPP
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string.h>
#include <ctime>
#include <bitset>
#include "NinjaTrap.hpp"
#include "FragTrap.hpp"

class  SuperTrap : public NinjaTrap, public FragTrap
{

  public :
  
  	SuperTrap (); // Constructeur par défaut
	SuperTrap(std::string Name);
	SuperTrap(const SuperTrap &o); // Constructeur de recopie
	virtual ~SuperTrap(); // Destructeur

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
};

#endif 
