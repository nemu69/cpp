#ifndef HUMANA_HPPPP
# define HUMANA_HPPPP

# include "Weapon.hpp"

class HumanA
{

	public :
	std::string name;
	Weapon &weapon;
	HumanA(std::string str, Weapon& weap);
	int attack();
};

#endif
