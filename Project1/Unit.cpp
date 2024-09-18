#include "Unit.h"

void Unit::setSoldiers(std::vector<int>& _soldiers)
{
	m_soldiers = _soldiers;
}

std::vector<int> Unit::getSoldiers()
{
	return m_soldiers;
}


Unit::UnitType Unit::determineUnit()
{
	if (m_soldiers.size() >= 6 && m_soldiers.size() <= 12)
	{
		return m_unitType = UnitType::Squad;
	}
	else if (m_soldiers.size() >= 13 && m_soldiers.size() <= 24)
	{
		return m_unitType = UnitType::Platoon;
	}
	else if (m_soldiers.size() >= 25 && m_soldiers.size() <= 50)
	{
		return m_unitType = UnitType::Echelon;
	}
	else if (m_soldiers.size() >= 51 && m_soldiers.size() <= 250)
	{
		return m_unitType = UnitType::Company;
	}
}

std::string Unit::getUnitTypeName(UnitType _unitType)
{
	switch (_unitType) {
	case UnitType::Squad:
		return "Squad";
	case UnitType::Platoon:
		return "Platoon";
	case UnitType::Echelon:
		return "Echelon";
	case UnitType::Company:
		return "Comapny";
	default:
		return "Unknown unit";
	}


}

Unit::Unit(int _soldiers)
{
	m_soldiers.resize(_soldiers, 0);

	//m_unitType = determineUnit();
	determineUnit();
}

Unit::Unit()
{
}

Unit::~Unit()
{
}


std::string Unit::toString()
{
	std::string result;
	if (m_commander_ptr != nullptr) {
		result = "Amount of soldriers: " + std::to_string(m_soldiers.size()) + ". Unit type is " + getUnitTypeName(m_unitType)
			+ ". Rank of commander of unit is " + m_commander_ptr->toString();
	}
	else if (m_commander_ptr == nullptr) {
		result = "Amount of soldriers: " + std::to_string(m_soldiers.size()) + ". Unit type is " + getUnitTypeName(m_unitType)
			+ ". This unit doesn`t have commander";
	}
	return result;
}

void Unit::setCommander(Commander* _commander)
{
	m_commander_ptr = _commander;
	m_soldiers.push_back(0); 
	determineUnit();
	//m_unitType = determineUnit();
}

void Unit::removeCommander()
{
	m_commander_ptr = nullptr;
	m_soldiers.pop_back();
	determineUnit();
	//m_unitType = determineUnit();
}

