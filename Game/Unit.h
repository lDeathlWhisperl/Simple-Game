#pragma once
#include "Point.h"

class Unit
{
protected:
	Point coords;
	int HP;
	int armor;
	
public:
	Unit(Point Coords, int hp, int Armor) : coords(Coords), HP(hp), armor(Armor) {}
	virtual void draw() const = 0;
	virtual Point getCoords() const;
};

