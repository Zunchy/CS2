//  String class test program
//
//  Name:  Zachary Waterbury
//  Tests: Length
//

#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main()
{
	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String str;

		// VERIFY
		assert(str.length() == 0);
	}

	{
		// Setup
		String str('a');

		// Verify
		assert(str.length() == 1);
	}

	{
		// Setup
		String str("a");

		// Verify
		assert(str.length() == 1);
	}

	{
		// Test
		String str("aa");

		// Verify
		assert(str.length() == 2);
	}

	{
		// Test
		String str("Hello World");

		// Verify
		assert(str.length() == 11);
	}

	{
		// Test
		String str("Hello World");

		// Verify
		assert(str.capacity() == 11);
	}

	std::cout << "Done testing length function." << std::endl;
}
