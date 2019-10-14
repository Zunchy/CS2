//  String class test program
//
//  Name:  Zachary Waterbury
//  Tests: Find str
//

#include "string.hpp"
#include <cassert>
#include <iostream>
#include <vector>

//===========================================================================
int main()
{
	{
		// Setup
		String str("hello world how are you");

		std::vector<String> a = str.split(' ');

		// Test & Verify
		assert(a[0] == "hello");
		assert(a[1] == "world");
		assert(a[2] == "how");
		assert(a[3] == "are");
		assert(a[4] == "you");
	}

	{
		// Setup
		String str("-a--b-");

		std::vector<String> a = str.split('-');

		// Test & Verify
		assert(a[0] == "");
		assert(a[1] == "a");
		assert(a[2] == "");
		assert(a[3] == "b");
		assert(a[4] == "");
	}

	std::cout << "Done testing split." << std::endl;
}
