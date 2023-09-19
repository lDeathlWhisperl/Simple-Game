#include "Player.h"
#include "Point.h"
#include <iostream>

Player::Player() : coords()
{

}

void Player::draw()
{
	gotoPoint(*coords);
	std::cout << 'P';
}

void controller()
{

}

Point Player::getCoords() const
{
	return *coords;
}