#include "Commander.h"

Commander::Rank Commander::CreateCommander()
{
	std::string inputRank;
	
		std::cout << "Enter rank of your commander: \n1.Sergeant(for squad), \n2.Staff Sergeant(for platoon), \n3.Sergeant First Class(for echelon), \n4.Captain(for company)." << std::endl;
	while (true)
	{
		std::cin >> inputRank;
		if (inputRank == "Sergeant" || inputRank == "1") 
		{
			m_rank = Commander::Rank::Sergeant;
			return m_rank;
		}
		else if (inputRank == "Staff Sergeant" || inputRank == "2") 
		{
			m_rank = Commander::Rank::StaffSergeant;
			return m_rank;
		}
		else if (inputRank == "Sergeant First Class" || inputRank == "3") 
		{
			m_rank = Commander::Rank::SergeantFirstClass;
			return m_rank;
		}
		else if (inputRank == "Captain" || inputRank == "4") 
		{
			m_rank = Commander::Rank::Captain;
			return m_rank;
		}
		else
		{
			std::cout << "Wrong input. Try again.";
		}
	}
}

void Commander::setCommander(Rank _rank)
{
	m_rank = _rank;
}

Commander::Rank Commander::getCommander()
{
	return m_rank;
}

Commander::Commander() {}

Commander::~Commander()
{
}

Commander::Commander(Rank _rank) :
	m_rank(_rank)
{
}

std::string Commander::toString()
{	
	switch (m_rank) {
	case Commander::Rank::Sergeant:
			return "Sergeant";
	case Commander::Rank::StaffSergeant:
		return "Staff Sergeant";
	case Commander::Rank::SergeantFirstClass:
		return "Sergeant First Class";
	case Commander::Rank::Captain:
		return "Captain";
	default:
		return "Unknown Rank";
	}
}
