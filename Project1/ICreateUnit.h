#pragma once
#include "Unit.h"
#include "Squad.h"
#include "Platoon.h"
#include "Echelon.h"
#include "Company.h"

class ICreateUnit {                                     // ������ � �� ������� ��� ����� �����
public:
    static Unit* createUnit(int soldiersCount);
};