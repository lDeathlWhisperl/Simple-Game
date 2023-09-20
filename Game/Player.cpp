#include "Player.h"
#include "Point.h"

#include <iostream>
#include <conio.h>

Player::Player() : coords(new Point(1, 1)) {}

void Player::draw()
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
		--coords->y;
		break;
	case 'A':
	case 'a':
		--coords->x;
		break;
	case 'S':
	case 's':
		++coords->y;
		break;
	case 'D':
	case 'd':
		++coords->x;
		break;
	}
}

Point Player::getCoords() const
{
	return *coords;
}