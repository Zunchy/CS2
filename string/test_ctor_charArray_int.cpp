//  String class test program
//
//  Name:  Zachary Waterbury
//  Tests: reset capacity
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
		String  str(10, "abc");

		// VERIFY
		assert(str == "abc");
		assert(str.length() == 0);
		assert(str.capacity() == 10);
	}


	std::cout << "Done testing int constructor." << std::endl;
}

