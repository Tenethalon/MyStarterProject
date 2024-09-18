#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <utility>
#include "Commander.h"
class Unit
{
public:
	enum class UnitType {
		Squad, //6-12 people
		Platoon, //12-24 people
		Echelon, //20-50 people
		Company //100-250 
	};
private:
	std::vector<int> m_soldiers;
	int m_soldiersCount;
	
	UnitType m_unitType;
	Commander* m_commander_ptr = nullptr;
	
public:
	virtual void setSoldiers(int _soldiers); 
	std::vector<int> getSoldiersFull();
	int getSoldiersCount();
	virtual UnitType determineUnit();
	virtual std::string getUnitTypeName(UnitType _unitType);
	Unit(int _soldiers);
	Unit();
	~Unit();
	std::string toString();
	void setCommander(Commander* _commander);
	void removeCommander();

};

