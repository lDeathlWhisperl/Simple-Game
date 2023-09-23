#include "Witch.h"
#include <iostream>

void Witch::draw() const
{
	gotoPoint(coords);
	std::cout << "|~";
}