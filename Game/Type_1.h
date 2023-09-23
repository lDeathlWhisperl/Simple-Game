#pragma once

#include "Spawner.h"

class Type_1 : public Spawner
{
	virtual Melee* spawn_melee(Point) const;
	virtual Range* spawn_range(Point) const;
};

