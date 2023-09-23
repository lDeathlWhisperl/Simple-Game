#include "Landscape.h"
#include <iostream>

#include "Base.h"

Landscape::Landscape(int Length, int Width, unsigned int Seed) 
	: length(Length), width(Width), seed(Seed)
{
	skip_list.push_back(Base::getCoord());
}

int Landscape::getRandomNumber(int min, int max)
{
	return min + rand() % (max - min + 1);
}
