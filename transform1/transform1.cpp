// transform1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <set>
#include <vector>
#include <algorithm>
#include <iterator>
#include <iostream>
#include "print.h"

int square(int value)
{
	return value * value;
}


int main()
{
	std::set<int> coll1;
	std::vector<int> coll2;

	// insert elements from 1 to 9 into coll1
	for (int i = 1; i <= 9; ++i)
	{
		coll1.insert(i);
	}
	PRINT_ELEMENTS(coll1, "initialised: ");

	// transform each element from coll1 to coll2
	// - square transformed values
	std::transform(coll1.cbegin(), coll1.cend(),	// source
		std::back_inserter(coll2),					// destination
		square);									// operation

	PRINT_ELEMENTS(coll2, "squared:	");

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
