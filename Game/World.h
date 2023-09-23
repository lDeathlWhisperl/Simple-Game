#pragma once
#include <iostream>
#include "Player.h"

class Landscape;
class Base;

class World
{
	friend Player;

	static int length;
	static int width;
	char landscape_type;

	Landscape* landscape = nullptr;
	Base* base = nullptr;
public:
	World(int Length, int Width, unsigned int Seed, char Landscape_type = 'p');
	World(int Length, int Width, char Landscape_type = 'p');

	void draw();

	~World();
private:
	void land_type(unsigned int Seed);
};

