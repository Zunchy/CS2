/**
 * Zachary Waterbury
 * Bigint
 * CS 23001
 */

 // Header File for bigint.cpp

#ifndef BIGINT_HPP
#define BIGINT_HPP

#include <iostream>

const int CAPACITY = 500;

class bigint {

public:
	bigint();
	bigint(int n);
	bigint(const char[]);
	int getSize();
	void setSize(int);
	void debugPrint(std::ostream&) const;
	bool operator==(bigint);
	int operator[](int) const;
	bigint operator+(const bigint&) const;
	bigint times_digit(int) const;
	bigint times_10(int) const;
	bigint operator*(const bigint&) const;

	int container[CAPACITY];

private:
	int size;
};

std::ostream& operator<<(std::ostream&, bigint);
std::istream& operator>>(std::istream&, bigint&);

#endif
