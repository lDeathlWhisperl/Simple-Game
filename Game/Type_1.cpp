#include "Type_1.h"

Melee* Type_1::spawn_melee(Point coords) const
{
    return new Fencer(coords);
}

Range* Type_1::spawn_range(Point coords) const
{
    return new Archer(coords);
}
