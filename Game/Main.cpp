#include <iostream>
#include <windows.h>

#include "World.h"
#include "Player.h"
#include "Point.h"

#define GAME_LOOP() while(true)
#define UPDATE_FRAME gotoPoint();

void Blinking()
{
    void* handle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO structCursorInfo;
    GetConsoleCursorInfo(handle, &structCursorInfo);
    structCursorInfo.bVisible = FALSE;
    SetConsoleCursorInfo(handle, &structCursorInfo);
}

int main()
{
    Blinking();
    World world(20, 20, 17042003, 't');
    Player player;

    GAME_LOOP()
    {
        world.draw();
        player.draw();
        player.controller();
        UPDATE_FRAME
    }
    return 0;
}