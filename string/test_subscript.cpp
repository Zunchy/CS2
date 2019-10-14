//  String class test program
//
//  Name:  Zachary Waterbury
//  Tests: subscript
//

#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main()
{
	{
		// Setup
		String str;

		// Verify
		assert(str[0] == '\0');
	}

	{
		// Setup
		String str('a');

		// Verify
		assert(str[0] == 'a');
	}

	{
		// Setup
		String str("a");

		// Verify
		assert(str[0] == 'a');
	}

	{
		// Setup
		String str("Hello World");

		// Verify
		assert(str[0] == 'H');
		assert(str[2] == 'l');
		assert(str[4] == 'o');
		assert(str[7] == 'o');
	}

	std::cout << "Done testing subscript Operator." << std::endl;
}
