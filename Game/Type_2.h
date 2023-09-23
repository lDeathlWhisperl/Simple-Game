#pragma once
#include "Spawner.h"

class Type_2 : public Spawner
{
public:
	virtual Melee* spawn_melee(Point) const;
	virtual Range* spawn_range(Point) const;
};

