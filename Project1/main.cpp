// 1. ������� ������� �� ������� ����.
// 1.1 ϳ������ ������ �����
// 1.2 ϳ������ ������ ���������

#include "Unit.h"

int main() 
{
	std::vector<int> Soldiers1(30, 1);
	Unit myUnit(Soldiers1);
	std::cout << myUnit.toString();
}