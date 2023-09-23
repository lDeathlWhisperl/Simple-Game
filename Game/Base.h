#pragma once
#include <list>

class Unit;
struct Point;

class Base
{
	std::list<Unit*> units;
	static Point* coords;

public:
	Base() {}
	Base(Point);
	~Base();

	void draw() const;
	static Point getCoord();
private:
	Unit* spawn(int, int);
};

