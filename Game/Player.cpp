#include "Player.h"
#include "Point.h"
#include "World.h"

#include <iostream>
#include <conio.h>

char Player::lastPressedKey = '\0';
Point* Player::coords = new Point();

Player::Player()
{
	coords->x = 2;
	coords->y = 2;
}

void Player::draw() const
{
	gotoPoint(*coords);
	std::cout << "[]";
}

void Player::controller()
{
	char movement = _getch();

	switch (movement)
	{
	case 'W':
	case 'w':
		if(coords->y != 2)
			--coords->y;
		break;
	case 'A':
	case 'a':
		if(coords->x != 2)
			--coords->x;
		break;
	case 'S':
	case 's':
		if (coords->y != World::width - 1)
			++coords->y;
		break;
	case 'D':
	case 'd':
		if (coords->x != World::length * 2 - 3)
			++coords->x;
		break;
	}

	lastPressedKey = movement;
}

Point Player::getCoords()
{
	return *coords;
}

char Player::getLastPressedKey()
{
	return lastPressedKey;
}
