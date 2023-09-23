#pragma once
#include "Range.h"

class Archer : public Range
{
public:
	Archer(Point Coords) : Range(Coords, 3, 1) {}
	virtual void draw() const override;
};

