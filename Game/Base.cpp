#include "Base.h"
#include "Player.h"

#include "Spawner.h"
#include "Type_1.h"
#include "Type_2.h"

#include <iostream>
#include <conio.h>

bool update = true;
int crutch = 0;

Base::Base() : coords(new Point())
{
    coords->x = 2;
    coords->y = 2;
}

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

void Base::draw()
{
    gotoPoint(*coords);
    std::cout << "##";

    unitShop();

    if (units.empty()) return;

    for (Unit* u : units)
    {
        u->draw();
        u->setCoords();
    }
}

void Base::spawn()
{
    Spawner* spawner = nullptr;
    Point position;

    std::cout << 
        "Enter the unit`s position:\n"
        "                          \n"
        "                          ";
    gotoPoint({0, 2});
    std::cin >> position.x >> position.y;
    
    switch (spawn_level)
    {
    default:
        spawner = new Type_1();
        break;
    case 2:
        spawner = new Type_2();
        break;
    }

    switch (spawn_type)
    {
    default:
        units.push_back(spawner->spawn_melee(position));
        break;
    case 2:
        units.push_back(spawner->spawn_range(position));
        break;
    }
    
    delete spawner;
    gotoPoint();

    meleemenu_isOpened = false;
    rangemenu_isOpened = false;
    update             = false; 
    crutch             = 0;
}

void Base::unitShop()
{
    if(Player::getLastPressedKey() != 32 || Player::getCoords() != *coords)
        return;

    gotoPoint();

    shopLoop(mainmenu_isOpened, &Base::mainMenu, &Base::meleeMenu, &Base::rangeMenu);

    system("cls");
}

void Base::mainMenu()
{
    mainmenu_isOpened = true;
    char buttons[][28] =
    {
        "0 -> exit                 \n",
        "1 -> melee                \n",
        "2 -> range                \n"
    };

    for (int i = 0; i < 3; ++i)
        std::cout << buttons[i];

    gotoPoint();
}

void Base::meleeMenu()
{
    meleemenu_isOpened = true;
    char buttons[][28] =
    {
        "0 -> back                 \n",
        "1 -> fencer               \n",
        "2 -> swordsman            \n"
    };

    for (int i = 0; i < 3; ++i)
        std::cout << buttons[i];

    gotoPoint();
}

void Base::rangeMenu()
{
    rangemenu_isOpened = true;
    char buttons[][28] =
    {
        "0 -> back                 \n",
        "1 -> archer               \n",
        "2 -> witch                \n"
    };

    for (int i = 0; i < 3; ++i)
        std::cout << buttons[i];

    gotoPoint();
}

void Base::controller(bool& isOpened, void (Base::*menu_1)(), void (Base::*menu_2)())
{
    char choice = '\0';

    if (update)
        choice = _getch();
    update = true;

    if (crutch % 2 == 0)
        spawn_type = choice - '0';
    else
        spawn_level = choice - '0';
    
    switch (choice)
    {
    case '0':
        isOpened = false;
        break;
    case '1':
        ++crutch;
        shopLoop(meleemenu_isOpened, menu_1, &Base::spawn, &Base::spawn);
        break;
    case '2':
        ++crutch;
        shopLoop(rangemenu_isOpened, menu_2, &Base::spawn, &Base::spawn);
        break;
    }
}

void Base::shopLoop(bool& isOpened,
    void (Base::* menu_type)(),
    void (Base::* option_1)(),
    void (Base::* option_2)())
{
    do
    {
        (this->*menu_type)();
        controller(isOpened, option_1, option_2);
    } while (isOpened);
}