#include "Squad.h"
#include "Unit.h"
#include "Commander.h"
int main() 
{
	Unit* unit_ptr = Unit::createUnit(30);
	std::cout << unit_ptr->toString();
	delete unit_ptr;
}