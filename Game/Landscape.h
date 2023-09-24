#pragma once

class Landscape
{
protected:
	int length;
	int width;
	unsigned int seed;

	int getRandomNumber(int min, int max);
public:
	Landscape(int Length, int Width, unsigned int Seed);

	virtual void draw() = 0;
};

