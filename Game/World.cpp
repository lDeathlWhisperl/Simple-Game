#include "World.h"
#include "Landscape.h"

#include "Forest.h"
#include "Desert.h"
#include "Tundra.h"
#include "Prototype.h"

World::World(int Length, int Width, unsigned int Seed, 
	char Landscape_type) : length(Length), width(Width), landscape_type(Landscape_type)
{
	land_type(Seed);
}

World::World(int Length, int Width, 
	char Landscape_type) : length(Length), width(Width), landscape_type(Landscape_type)
{
	land_type((unsigned int)(-1));
}

void World::draw()
{
	landscape->draw();
}

void World::land_type(unsigned int Seed)
{
	switch (landscape_type)
	{
	case 'f':
	case 'F':
		landscape = new Forest(length, width, Seed);
		break;
	case 'd':
	case 'D':
		landscape = new Desert(length, width, Seed);
		break;
	case 't':
	case 'T':
		landscape = new Tundra(length, width, Seed);
		break;
	default:
		landscape = new Prototype(length, width);
	}
}