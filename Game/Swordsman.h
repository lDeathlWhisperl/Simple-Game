#pragma once

#include "Melee.h"

class Swordsman : public Melee
{
public:
	Swordsman(Point Coords) : Melee(Coords, 3, 1) {}
	virtual void draw() const override;
};

