//  String class test program
//
//  Name:  Zachary Waterbury
//  Tests: Find Char
//

#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main()
{
	{
		// Setup
		String str1;

		// Test & Verify
		assert(str1 == "");
		assert(str1.findch(0,'a') == -1);
	}

	{
		// Setup
		String str1 = "Hello World";

		// Test & Verify
		assert(str1 == "Hello World");
		assert(str1.findch(2, 'l') == 2);
		assert(str1.findch(5, 'W') == 6);
	}

	{
		// Setup
		String str1 = "Hello World";

		// Test & Verify
		assert(str1 == "Hello World");
		assert(str1.findch(2, 'o') == 4);
		assert(str1.findch(5, 'z') == -1);
	}

	std::cout << "Done testing find char." << std::endl;
}
