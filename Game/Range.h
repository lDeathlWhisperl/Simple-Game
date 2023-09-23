#pragma once
#include "Unit.h"

class Range : public Unit
{
public:
	Range(Point Coords, int hp, int Armor) : Unit(Coords, hp, Armor) {}
};

