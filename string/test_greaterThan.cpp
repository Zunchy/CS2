//  String class test program
//
//  Name:  Zachary Waterbury
//  Tests: greater than
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
		String str2;

		// Test & Verify
		assert(str1 >= str2);
	}

	{
		// Setup
		String str1("b");
		String str2("a");

		// Test & Verify
		assert(str1 > str2);
		assert(str1 >= str2);
	}

	{
		// Setup
		String str1("bf");
		String str2("bb");

		// Test & Verify
		assert(str1 > str2);
		assert(str1 >= str2);
	}

	{
		// Setup
		String str1("ba");
		String str2("b");

		// Test & Verify
		assert(str1 > str2);
		assert(str1 >= str2);
	}

	std::cout << "Done testing greater than Operator." << std::endl;
}
