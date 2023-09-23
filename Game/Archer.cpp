#include "Archer.h"
#include <iostream>

void Archer::draw() const
{
	gotoPoint(coords);
	std::cout << "|>";
}