#pragma once
#include <iostream>
#include <list>
#include "Point.h"

class Landscape
{
protected:
	int length;
	int width;
	unsigned int seed;

	std::list<Point> skip_list;

	int getRandomNumber(int min, int max);
public:
	Landscape(int Length, int Width, unsigned int Seed);

	virtual void draw() = 0;
};

