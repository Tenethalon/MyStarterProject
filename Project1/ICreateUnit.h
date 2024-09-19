#pragma once
#include "Unit.h"
#include "Squad.h"
#include "Platoon.h"
#include "Echelon.h"
#include "Company.h"

class ICreateUnit {                                     // онлнцх ъ ме оюмхлюч ╙рю цюлмн ╞аюме
public:
    static Unit* createUnit(int soldiersCount);
};