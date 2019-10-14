//  String class test program
//
//  Name:  Zachary Waterbury
//  Tests: default ctor
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
		String  str;

		// VERIFY
		assert(str == "");
	}

	std::cout << "Done testing Default Constructor." << std::endl;
}
