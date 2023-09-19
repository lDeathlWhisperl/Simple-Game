#pragma once

class Landscape;

class World
{
	int length;
	int width;
	char landscape_type;

	Landscape* landscape = nullptr;
public:
	World(int Length, int Width, unsigned int Seed, char Landscape_type = 'p');
	World(int Length, int Width, char Landscape_type = 'p');
	void draw();

private:
	void land_type(unsigned int Seed);
};

