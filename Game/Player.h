#pragma once
#include <iostream>

struct Point;

class Player
{
	static Point* coords;
	static char lastPressedKey;

public:
	Player();

	void draw() const;
	void controller();
	static Point getCoords();
	static char getLastPressedKey();
};

