#pragma once
#include "Landscape.h"

class Prototype : public Landscape
{
public:
	Prototype(int length, int width) : Landscape(length, width, 0) {}
	void draw();
};

