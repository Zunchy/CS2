//==============================================================================
// Basics for openning a file for milestone 2 of Project 1.
//
#include <iostream>
#include <fstream>
#include <cstdlib>
#include "bigint.hpp"

int main() {

    std::ifstream in("data1-1.txt");    // Define stream for input
    if(!in) {                           // Make sure it opened correctly.
        std::cerr << "Could not open data1-1.txt, exiting." << std::endl;
        exit(1);
    }

	bigint a;
	bigint b;

	in >> a >> b;
    
	while (!in.eof()){

		std::cout << "a == " << a << std::endl;
		std::cout << "b == " << b << std::endl;

		std::cout << "a + b == " << a + b << std::endl;

		in >> a >> b;

	}
 
    in.close();
    return 0;
}

