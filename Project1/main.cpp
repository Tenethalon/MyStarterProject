#include "Squad.h"
#include "Unit.h"
#include "Commander.h"
int main() 
{
	Squad* squad_ptr = new Squad(14);
	std::cout << squad_ptr->toString();
	delete squad_ptr;
}