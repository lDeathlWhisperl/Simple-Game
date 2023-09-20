#pragma once
#include <iostream>
struct Point;

class Player
{
	Point* coords;

public:
	Player();

	void draw();
	void controller();
	Point getCoords() const;
};

