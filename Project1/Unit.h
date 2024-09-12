#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <utility>
class Unit
{
private:
	std::vector<int> m_soldiers;
	enum class UnitType {
		Squad, //6-12 people
		Platoon, //12-24 people
		Echelon, //20-50 people
		Company //100-250 
	};
	UnitType m_unitType;
public:
	void setSoldiers(std::vector<int>& _soldiers);
	std::vector<int> getSoldiers();
	UnitType determineUnit();
	std::string getUnitTypeName(UnitType _unitType);
	Unit(std::vector<int>& _soldiers);
	Unit();
	std::string toString();

};

