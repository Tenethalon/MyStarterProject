// 1. Создати підрозділ та описати його.
// 1.1 Підрозділ містить людей
// 1.2 Підрозділ містить командира

#include "Unit.h"

int main() 
{
	std::vector<int> Soldiers1(30, 1);
	Unit myUnit(Soldiers1);
	std::cout << myUnit.toString();
}