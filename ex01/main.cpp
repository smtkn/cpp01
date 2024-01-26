#include "Zombie.hpp"

int main()
{
	int nbr = 8;
	Zombie *Zombie = zombieHorde(nbr, "First Zombie");

	for(int i = 0; i < nbr; i++)
		Zombie[i].announce();
	
	delete [] Zombie;
}