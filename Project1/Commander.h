#pragma once
#include <iostream>
#include <string>

class Commander
{
public:
	enum class Rank {
	Sergeant,// squad
		StaffSergeant, //Platoon
		SergeantFirstClass, //echelon
		Captain //company
};
private:
	
	Rank m_rank;
public:

	Rank CreateCommander();
	void setCommander(Rank _rank);
	Rank getCommander();
	Commander();     
	~Commander();    
	Commander(Rank _rank);
	std::string toString();
	
};

