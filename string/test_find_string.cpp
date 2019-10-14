//  String class test program
//
//  Name:  Zachary Waterbury
//  Tests: Find str
//

#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main()
{
	{
		// Setup
		String str1("hello");

		// Test & Verify
		assert(str1 == "hello");
		assert(str1.findstr(0,'a') == -1);
	}

	{
		// Setup
		String str1("hello world");

		// Test & Verify
		assert(str1 == "hello world");
		assert(str1.findstr(2, "wo") == 6);
	}

	{
		// Setup
		String str1("hello");

		// Test & Verify
		assert(str1 == "hello");
		assert(str1.findstr(0, 'o') == 4);
	}

	{
		// Setup
		String str1("hello world");

		// Test & Verify
		assert(str1 == "hello world");
		assert(str1.findstr(4, "o w") == 4);
	}

	std::cout << "Done testing find str." << std::endl;
}
