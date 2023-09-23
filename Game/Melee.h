#pragma once

#include "Unit.h"

class Melee : public Unit
{
public:
	Melee(Point Coords, int hp, int Armor) : Unit(Coords, hp, Armor){}
};

