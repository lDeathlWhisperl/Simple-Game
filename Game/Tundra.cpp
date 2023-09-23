#include "Tundra.h"
#include <iostream>

#include "Point.h"

void Tundra::draw()
{
	srand(seed);
	for (int y = 1; y < width+1; ++y)
	{
		for (int x = 1; x < length + 1; ++x)
		{
			//MUST BE REWORKED
			bool skip = false;
			for (Point pnt : skip_list)
				if (pnt.x == x && pnt.y == y)
					skip = true;
			if (skip) gotoPoint({x, y});
			//
			
			if (x == 1 && (y > 1 && y < width ))
				std::cout << "X\x1b[97m" << (char)219 << "\x1b[0m";
			else if (x % (length - 1) == 1 || y % (width - 1) == 1)
				std::cout << "X ";
			else if (getRandomNumber(0, 100) < 6)
				std::cout << "\x1b[32m" << (char)219 << (char)219 << "\x1b[0m";
			else if (getRandomNumber(0, 100) < 25)
				std::cout << (char)219 << (char)219;
			else
				std::cout << "\x1b[97m" << (char)219 << (char)219 << "\x1b[0m";
		}
		std::cout << '\n';
	}
}