#pragma once
#include <list>

class Unit;
struct Point;

class Base
{
	std::list<Unit*> units;
	Point* coords;
	bool mainmenu_isOpened  = false;
	bool meleemenu_isOpened = false;
	bool rangemenu_isOpened = false;

	int spawn_type  = 0;
	int spawn_level = 0;
public:
	Base();
	Base(Point);
	~Base();

	void draw();
private:
	void spawn();
	void unitShop();
	void mainMenu();
	void meleeMenu();
	void rangeMenu();
	void controller(bool&, void(Base::*)(), void(Base::*)());
	void shopLoop(bool&, void(Base::*)(), void(Base::*)(), void(Base::*)());
};

