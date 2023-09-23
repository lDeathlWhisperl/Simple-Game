#include "World.h"
#include "Base.h"
#include "Landscape.h"

#include "Forest.h"
#include "Desert.h"
#include "Tundra.h"
#include "Prototype.h"

int World::length;
int World::width;

World::World(int Length, int Width, unsigned int Seed, 
	char Landscape_type) : landscape_type(Landscape_type)
{
	length = Length;
	width = Width;
	land_type(Seed);
	
	base = new Base();
}

World::World(int Length, int Width, 
	char Landscape_type) : landscape_type(Landscape_type)
{
	land_type((unsigned int)(-1));

	base = new Base();
}

World::~World()
{
	delete landscape;
	delete base;
}

void World::draw()
{
	landscape->draw();
	base->draw();
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