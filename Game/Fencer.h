#pragma once

#include "Melee.h"

class Fencer : public Melee
{
public:
	Fencer(Point Coords) : Melee(Coords, 2, 0) {}
	virtual void draw() const override;
};

