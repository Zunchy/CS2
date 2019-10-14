//  String class test program
//
//  Name:  Zachary Waterbury
//  Tests: equal and Not Equal
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
		String  right("Hello");

		// TEST
		bool result = (left == right);

		// VERIFY
		assert(result == true);
		assert(result != false);
		assert(left == "Hello");
		assert(right == "Hello");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  left("Hello World");
		String  right("Hello World");

		// TEST
		bool result = (left == right);

		// VERIFY
		assert(result == true);
		assert(result != false);
		assert(left == "Hello World");
		assert(right == "Hello World");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  left('f');
		String  right('f');

		// TEST
		bool result = (left == right);

		// VERIFY
		assert(result == true);
		assert(result != false);
		assert(left == "f");
		assert(right == "f");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  left("Hello");
		String  right("Goodbye");

		// TEST
		bool result = (left == right);

		// VERIFY
		assert(result == false);
		assert(result != true);
		assert(left == "Hello");
		assert(right == "Goodbye");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE
		String  left("Hello, how are you today");
		String  right("Hello, how are you today");

		// TEST
		bool result = (left == right);

		// VERIFY
		assert(result == true);
		assert(result != false);
		assert(left == "Hello, how are you today");
		assert(right == "Hello, how are you today");
	}

	std::cout << "Done testing Equal and Not Equal Operator." << std::endl;
}
