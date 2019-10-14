//  String class test program
//
//  Name:  Zachary Waterbury
//  Tests: int ctor
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
		String  str(10);

		// VERIFY
		assert(str.length() == 0);
		assert(str.capacity() == 10);
	}


	std::cout << "Done testing int constructor." << std::endl;
}

