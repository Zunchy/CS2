//  String class test program
//  Name: Zachary Waterbury
//  Tests: Substring
//

#include "string.hpp"
#include <iostream>
#include <cassert>

//===========================================================================
int main ()
{
	{
		// Setup
		String str1 = "abcdefghijk";
		String result1;
		String result2;

		// Test
		result1 = str1.substr(0,3);
		result2 = str1.substr(1,12);


		// Verfiy
		assert(str1 == "abcdefghijk");
		assert(result1 == "abcd");
		assert(result2 == "bcdefghijk");
	}
	
	{
		// Setup
		String str = "Hello World";

		// Test & Verify
		assert(str.substr(0, 3) == "Hell");
		assert(str.substr(4, 5) == "o ");
	}

	std::cout << "Done testing Substring" << std::endl;

}
