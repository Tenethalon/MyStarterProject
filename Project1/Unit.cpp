#include "Unit.h"
#include "ICreateUnit.h"

 void Unit::setSoldiers(int _soldiers)
{
	m_soldiers.resize(_soldiers, 0);
}

std::vector<int> Unit::getSoldiersFull()
{
	return m_soldiers;
}

int Unit::getSoldiersCount()
{
	return m_soldiers.size();
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
	m_soldiers = std::vector<int>(_soldiers, 0);

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
	//m_soldiers.push_back(0); 
	//determineUnit();
	//m_unitType = determineUnit();
}

void Unit::removeCommander()
{
	m_commander_ptr = nullptr;
	//m_soldiers.pop_back();
	//determineUnit();
	//m_unitType = determineUnit();
}

Unit* ICreateUnit::createUnit(int _soldiers)                          // ÏÎÌÎÃÈ ß ÍÅ ÏÀÍÈÌÀÞ ªÒÀ ÃÀÌÍÎ ¯ÁÀÍÅ
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

