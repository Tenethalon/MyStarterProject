
#include "Unit.h"
#include "Commander.h"
int main() 
{
	Commander* commander = new Commander();
	commander->setCommander(Commander::Rank::Captain);
	std::cout << std::to_string(static_cast<int>(commander->getCommander())) << std::endl;
	Unit* unit1 = new Unit(12);
	std::cout << unit1->toString() << std::endl;;
	unit1->setCommander(commander);
	std::cout << unit1->toString() << std::endl;
	delete unit1;
	delete commander;
}