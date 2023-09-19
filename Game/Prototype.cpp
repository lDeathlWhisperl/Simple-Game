#include "Prototype.h"
#include <iostream>

void Prototype::draw()
{
	for (int y = 0; y < width; ++y)
	{
		for (int x = 0; x < length; ++x)
		{
			if (x % (length - 1) == 0 || y % (width - 1) == 0)
				std::cout << "X ";
			else
				std::cout << "  ";
		}
		std::cout << '\n';
	}
}