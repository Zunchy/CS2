//  String class test program
//
//  Name:  Zachary Waterbury
//  Tests: char ctor
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
		String  str('e');

		// VERIFY
		assert(str == "e");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String  str('3');

		// VERIFY
		assert(str == "3");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String  str('G');

		// VERIFY
		assert(str == "G");
	}

	std::cout << "Done testing single char Constructor." << std::endl;
}
