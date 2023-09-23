#include "Fencer.h"
#include <iostream>

void Fencer::draw() const
{
	gotoPoint(coords);
	std::cout << "|-";
}