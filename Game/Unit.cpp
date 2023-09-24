#include "Unit.h"

#include "Player.h"

Point Unit::getCoords() const
{
	return coords;
}

void Unit::setCoords()
{
	if (Player::getLastPressedKey() == 32 && Player::getCoords() == coords)
	{
		gotoPoint();
		std::cout << 
			"set new unit location: \n"
			"                         ";
		std::cin >> coords.x >> coords.y;
	}
}