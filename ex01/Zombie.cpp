#include "Zombie.hpp"

Zombie::Zombie()
{
	Name = "Default Name";
	std::cout << "Constructor is called\n";
}

Zombie ::~Zombie()
{
	std::cout << "Destructor is called\n"; 
}

void Zombie::setName(std::string name)
{
	Name = name;
}
void Zombie::announce(void)
{
	std::cout << Name << ": BraiiiiiiinnnzzzZ...\n"; 
}