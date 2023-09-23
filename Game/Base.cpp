#include "Base.h"
#include "Player.h"
#include "Spawner.h"
#include "Player.h"

#include <iostream>

Point* Base::coords = new Point(1, 1);

Base::Base(Point Coords)
{
    coords = &Coords;
}

Base::~Base()
{
    delete coords;

    for (Unit* unit : units)
        delete unit;
}

void Base::draw() const
{
    gotoPoint(*coords);
    std::cout << "#";
}

Point Base::getCoord()
{
    return *coords;
}

Unit* Base::spawn(int, int)
{
    return nullptr;
}
