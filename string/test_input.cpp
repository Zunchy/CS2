//  String class test program
//
//  Name:  Zachary Waterbury
//  Tests: Input
//

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cassert>
#include "string.hpp"

//===========================================================================
int main()
{
	{

		std::ifstream in("input.txt");    // Define stream for input
		if (!in) {                           // Make sure it opened correctly.
			std::cerr << "Could not open input.txt, exiting." << std::endl;
			exit(1);
		}

		//------------------------------------------------------
		// SETUP FIXTURE
		String  str1;
		String  str2;
		in >> str1;
                in >> str2;

		// VERIFY
		assert(str1 == "131.123.47.176");
		assert(str2 == "-");
	}


	std::cout << "Done testing Input." << std::endl;
}
