//  String class test program
//
//  Name:  Zachary Waterbury
//  Tests: less than
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
		assert(str1 <= str2);
	}

	{
		// Setup
		String str1("a");
		String str2("b");

		// Test & Verify
		assert(str1 < str2);
		assert(str1 <= str2);
	}

	{
		// Setup
		String str1("ab");
		String str2("bb");

		// Test & Verify
		assert(str1 < str2);
		assert(str1 <= str2);
	}

	{
		// Setup
		String str1("ab");
		String str2("b");

		// Test & Verify
		assert(str1 < str2);
		assert(str1 <= str2);
	}

	std::cout << "Done testing less than Operator." << std::endl;
}
