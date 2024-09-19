#include "Echelon.h"

Echelon::Echelon(int _soldiers):
	Unit(_soldiers)
{
	std::cout << "Echelon with " << _soldiers << "soldiers was created." << std::endl;
}

Echelon::~Echelon()
{
	std::cout << "Echelon was deleted." << std::endl;
}
