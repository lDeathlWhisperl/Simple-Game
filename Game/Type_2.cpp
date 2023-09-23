#include "Type_2.h"

Melee* Type_2::spawn_melee(Point coords) const
{
	return new Swordsman(coords);
}

Range* Type_2::spawn_range(Point coords) const
{
	return new Witch(coords);
}
