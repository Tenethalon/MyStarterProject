// 1. Создати підрозділ та описати його.
// 1.1 Підрозділ містить людей
// 1.2 Підрозділ містить командира

#include "Unit.h"

int main() 
{
	Unit* unit1ptr = new Unit();
	unit1ptr->setSoldiers(30, 1);
}