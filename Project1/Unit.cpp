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
		return UnitType::Squad;
	}
	else if (m_soldiers.size() >= 13 && m_soldiers.size() <= 24)
	{
		return UnitType::Platoon;
	}
	else if (m_soldiers.size() >= 25 && m_soldiers.size() <= 50)
	{
		return UnitType::Echelon;
	}
	else if (m_soldiers.size() >= 51 && m_soldiers.size() <= 250)
	{
		return UnitType::Company;
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

Unit::Unit(std::vector<int>& _soldiers)
{
	m_soldiers = _soldiers;
}

Unit::Unit()
{
}

std::string Unit::toString()
{
	std::string result;
	result = "Amount of soldriers: " + std::to_string(m_soldiers.size()) + ". Unit type is " + getUnitTypeName(m_unitType);
	return result;
}
