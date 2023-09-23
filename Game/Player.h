#pragma once
#include <iostream>

struct Point;

class Player
{
	Point* coords;
	static char lastPressedKey;

public:
	Player();

	void draw() const;
	void controller();
	Point getCoords() const;
	static char getLastPressedKey();
};

