#pragma once

#include "Fencer.h"
#include "Swordsman.h"

#include "Archer.h"
#include "Witch.h"

class Spawner
{
public:
	virtual Melee* spawn_melee(Point) const = 0;
	virtual Range* spawn_range(Point) const = 0;
};

