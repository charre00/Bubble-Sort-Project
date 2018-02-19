#include "stdafx.h"
#include <utility>
#include <iostream>

int main()
{
	int array[] = { 6, 3, 2, 9, 7, 1, 5, 4, 8 };
	const int length = sizeof(array) / sizeof(array[0]);
	int outerBoundIndex = length;
	for (int count = 1; count < length; ++count) 
	{
		bool Swaps = false;
		for (int startingIndex = 0; startingIndex < outerBoundIndex - 1; ++startingIndex)
		{
			int currentIndex = startingIndex + 1;
			if (array[currentIndex] < array[startingIndex])
			{
				std::swap(array[currentIndex], array[startingIndex]);
				Swaps = true;
			}
		}
		if (!Swaps)
		{
			std::cout << "Early termination on iteration " << count << ". \n";
			break;
		}
		--outerBoundIndex;
	}
	for (int index = 0; index < length; ++index)
	{
		std::cout << array[index] << ' ';
	}
	std::cin.get();
	std::cin.ignore(32767, '\n');
	std::cin.clear();
	return 0;
}

