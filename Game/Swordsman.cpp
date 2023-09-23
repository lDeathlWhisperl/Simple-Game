#include "Swordsman.h"
#include <iostream>

void Swordsman::draw() const
{
	gotoPoint(coords);
	std::cout << "|/";
}