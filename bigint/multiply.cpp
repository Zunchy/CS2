#include "bigint.hpp"
#include <iostream>
#include <fstream>
#include <cstdlib>

int main() {

	std::ifstream in("data1-2.txt");   
	if (!in) {                          
		std::cerr << "Could not open data1-2.txt, exiting." << std::endl;
		exit(1);
	}

	bigint a;
	bigint b;

	in >> a >> b;

	while (!in.eof()) {

		std::cout << "a == " << a << std::endl << std::endl;
		std::cout << "b == " << b << std::endl << std::endl;

		std::cout << "a * b == " << a * b << std::endl << std::endl;

		in >> a >> b;

	}

	in.close();
	return 0;


}
