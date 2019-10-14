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
		String  str('e');
		str.resetCapacity(8);

		// VERIFY
		assert(str.length() == 8);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String  str("Hello");
		str.resetCapacity(10);

		// VERIFY
		assert(str.length() == 10);
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String  str("Hello");
		str.resetCapacity(2);

		// VERIFY
		assert(str == "He");
	}

	std::cout << "Done testing Reset Capacity." << std::endl;
}

