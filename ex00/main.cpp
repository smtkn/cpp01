#include "Zombie.hpp"

int main()
{
	Zombie z1("First Zombie");
	z1.announce();

	Zombie *z2 = newZombie("Second Zombie");
	z2->announce();
	
	randomChump("Third Zombie");
	delete z2;
	return 0;
}