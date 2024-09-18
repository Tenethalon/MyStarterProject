#include "Squad.h"

Squad::Squad(int _soldiers) :
	Unit(_soldiers)
{
	std::cout << "Squad with " << Unit::getSoldiersCount() << " soldiers was created." << std::endl;
}

Squad::~Squad()
{
	std::cout << "Squad was deleted";
}
