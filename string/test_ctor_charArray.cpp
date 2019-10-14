//  String class test program
//
//  Name:  Zachary Waterbury
//  Tests: char array ctor
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
		String  str("hello");

		// VERIFY
		assert(str == "hello");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String  str("Hello World");

		// VERIFY
		assert(str == "Hello World");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String  str("t");

		// VERIFY
		assert(str == "t");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String  str("");

		// VERIFY
		assert(str == "");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String  str("Hello, How are you Today?");

		// VERIFY
		assert(str == "Hello, How are you Today?");
	}

	{
		//------------------------------------------------------
		// SETUP FIXTURE

		// TEST
		String  str("HelloHelloHelloHelloHelloHelloHelloHelloHelloHello");

		// VERIFY
		assert(str == "HelloHelloHelloHelloHelloHelloHelloHelloHelloHello");
	}
	std::cout << "Done testing Character Array Constructor." << std::endl;
}
