#include "Forest.h"
#include <iostream>

void Forest::draw()
{
	srand(seed);

	for (int y = 0; y < width; ++y)
	{
		for (int x = 0; x < length; ++x)
			if (x % (length - 1) == 0 || y % (width - 1) == 0)
				std::cout << "X ";
		std::cout << '\n';
	}
}