#pragma once
#include "Squad.h"
#include "Platoon.h"
#include "Echelon.h"
#include "Company.h"
#include "Unit.h"


class ICreateUnit {                                     // I DONT UNDERSTANT THIS GAMNO YOBANOE POMOGI VLAD
public:
    static Unit* createUnit(int _soldiers) {
            {
            	if (_soldiers >= 6 && _soldiers <= 12)
            	{
            		return new Squad(_soldiers);
            	}
            	else if (_soldiers >= 13 && _soldiers <= 24)
            	{
            		return new Platoon(_soldiers);
            	}
            	else if (_soldiers >= 25 && _soldiers <= 50)
            	{
            		return new Echelon(_soldiers);
            	}
            	else if (_soldiers >= 51 && _soldiers <= 250)
            	{
            		return new Company(_soldiers);
            	}
            	else
            	{
            		std::cout << "Invalid number of soldiers";
            	}
            }
            
    };
};