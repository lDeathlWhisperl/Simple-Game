#pragma once
#include "Range.h"

class Witch : public Range
{
public:
	Witch(Point Coords) : Range(Coords, 4, 2) {}
	virtual void draw() const override;
};

