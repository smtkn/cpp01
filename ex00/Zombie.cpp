#include "Zombie.hpp"

Zombie ::Zombie()
{
	Name = "";
	std::cout << "Constructor is called" << std::endl;
}
Zombie ::Zombie(std::string name)
{
	Name = name;
	std::cout << Name <<" has been created!" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << Name << " has been destroyed" << std::endl;
}

void Zombie::announce()
{
	std::cout << this->Name  << ": BraiiiiiiinnnzzzZ...\n";
}
