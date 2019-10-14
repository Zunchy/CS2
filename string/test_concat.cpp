//  String class test program
//
//  Name:  Zachary Waterbury
//  Tests: concatanation
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
		String  left("Hello");
		String  right('f');

		// TEST
		String result = (left + right);

		// VERIFY
		assert(result == "Hellof");
		assert(left == "Hello");
		assert(right == "f");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  left('f');
		String  right("Hello");

		// TEST
		String result = (left + right);

		// VERIFY
		assert(result == "fHello");
		assert(left == "f");
		assert(right == "Hello");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  left("Hello ");
		String  right("World");

		// TEST
		String result = (left + right);

		// VERIFY
		assert(result == "Hello World");
		assert(left == "Hello ");
		assert(right == "World");
	}


	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  left("Testing testing...");
		String  right("  ..");

		// TEST
		String result = (left + right);

		// VERIFY
		assert(result == "Testing testing...  ..");
		assert(left == "Testing testing...");
		assert(right == "  ..");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  left("abc");
		String  right("123");

		// TEST
		String result = (left + right);

		// VERIFY
		assert(result == "abc123");
		assert(left == "abc");
		assert(right == "123");
	}

	std::cout << "Done testing concatenation Operator." << std::endl;
}
