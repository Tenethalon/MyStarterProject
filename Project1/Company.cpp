#include "Company.h"

Company::Company(int _soldiers):Unit(_soldiers)
{
	std::cout << "Company with " << _soldiers << "soldiers was created." << std::endl;
}

Company::~Company()
{
	std::cout << "Company was deleted." << std::endl;
}
