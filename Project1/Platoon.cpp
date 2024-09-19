#include "Platoon.h"

Platoon::Platoon(int _soldiers) : Unit(_soldiers)
{
	std::cout << "Platoon with " << _soldiers << "soldiers was created." << std::endl;
}

Platoon::~Platoon()
{
	std::cout << "Platoon was deleted." << std::endl;
}
