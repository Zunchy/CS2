/**
 * Zachary Waterbury
 * string
 * CS 23001
 */

 // ADT string that can hold and manipulate multiple characters

#include "string.hpp"

/////////////////////////////////////////////////////////
// Constructors
/////////////////////////////////////////////////////////

String::String() {

	stringSize = 1;
	str = new char[stringSize];
	str[0] = 0;

}

String::String(char c) {

	stringSize = 2;
	str = new char[stringSize];

	str[0] = c;
	str[1] = 0;

}

String::String(const char s[]) {

	int size = 0;

	while (s[size] != 0)
		++size;

	stringSize = size + 1;
	str = new char[size + 1];


	for (int i = 0; i < stringSize; ++i)
		str[i] = s[i];

	str[size] = 0;

}

String::String(int n) {

	stringSize = n + 1;
	str = new char[n + 1];
	str[0] = 0;

}

String::String(int n, const char s[] ) {

	stringSize = n + 1;
	str = new char[n + 1];

	int i = 0;

	while (s[i] != 0) {
		str[i] = s[i];
		++i;
	}
          
	str[i] = 0;

}

/////////////////////////////////////////////////////////////////////
// Copy Constructor, Destructor, Assignment Overload, And Swap
/////////////////////////////////////////////////////////////////////

String::String(const String& rhs) {

	stringSize = rhs.stringSize;
	str = new char[stringSize + 1];

	for (int i = 0; i < stringSize; ++i)
		str[i] = rhs[i];

	str[stringSize] = 0;

}

String::~String() {

	delete[] str;

}

String& String::operator=(String rhs) {

	swap(rhs);
	return *this;

}

void String::swap(String& rhs) {

	char *temp = str;
	str = rhs.str;
	rhs.str = temp;

	int sizeTemp = stringSize;
	stringSize = rhs.stringSize;
	rhs.stringSize = sizeTemp;

}

/////////////////////////////////////////////////////////
// MEMBER FUNCTIONS
/////////////////////////////////////////////////////////

char& String::operator[](int i) {

	return str[i];

}

char String::operator[](int i) const {

	return str[i];

}

int String::capacity() const {

	return stringSize - 1;

}

int String::length() const {

	int result = 0;
	while (str[result] != 0)
		++result;

	return result;

}

String String::operator+(const String& rhs) const {

	String result(str);
	int offset = length();
	int i = 0;

	result.resetCapacity(length() + rhs.length() + 1);

	while (rhs.str[i] != 0) {
		if (offset + i == result.capacity()) break;
		result.str[offset + i] = rhs.str[i];
		++i;
	}

	result.str[offset + i] = 0;
	return result;

}

String& String::operator+=(const String& rhs) {

	int offset = length();
	int i = 0;

	resetCapacity(length() + rhs.length());

	while (rhs.str[i] != 0) {
		if (offset + i == capacity()) break;
		str[offset + i] = rhs.str[i];
		++i;
	}

	str[offset + i] = 0;
	return *this;

}

bool String::operator==(const String& rhs) const {

	int i = 0;

	while ((str[i] != 0) && (str[i] == rhs.str[i]))
		++i;

	return str[i] == rhs.str[i];

}

bool String::operator<(const String &rhs) const {

	int i = 0;

	while ((str[i] != 0) && (rhs.str[i] != 0) && (str[i] == rhs.str[i]))
		++i;

	return str[i] < rhs.str[i];

}

String String::substr(int start, int end) const {

	if (start < 0)         start = 0;
	if (end < 0)           return "";
	if (start >= length()) return "";
	if (end >= length())   end = length() - 1;
	if (start > end)       return "";

	String result;
	result.resetCapacity((end - start) + 1);
	int j = 0;

	for (int i = start; i <= end; ++i) {

		result.str[j] = str[i];
		++j;

	}

	result.str[j] = 0;
	return result;

}

void String::resetCapacity(int n) {

	String temp(n,str);
	swap(temp);

}

/////////////////////////////////////////////////////////
// FRIEND FUNCTIONS
/////////////////////////////////////////////////////////

std::istream& operator>>(std::istream& in, String& rhs) {

	rhs = "";

	char ch;
	in >> ch;
	rhs += ch;

        while (in.get(ch) && ch != ' ' && ch != '\n' && ch != '\t' && ch != '\r')	
	    rhs += ch;

	return in;
}

std::ostream& operator<<(std::ostream& out, const String& rhs) {

	out << rhs.str;
	return out;

}

//////////////////////////////////////////////////////////
// RELATIONAL OPERATORS
//////////////////////////////////////////////////////////

String operator+(const char lhs[], const String& rhs) {

	return String(lhs) + rhs;
}

String operator+(char lhs, const String &rhs) {

	return String(lhs) + rhs;
}

bool operator==(const char lhs[], const String& rhs) {

	String compare(lhs);
	return compare == rhs;

}

bool operator==(char lhs, const String& rhs) {

	String compare(lhs);
	return compare == rhs;

}

bool operator<(const char lhs[], const String& rhs) {

	String compare(lhs);
	return compare < rhs;

}

bool operator<(char lhs, const String& rhs) {

	String compare(lhs);
	return compare < rhs;

}

bool operator<=(const String& lhs, const String& rhs) {

	if ((lhs < rhs) || (lhs == rhs))
		return true;

	return false;

}

bool operator!=(const String& lhs, const String& rhs) {

	if (lhs == rhs)
		return false;

	return true;

}

bool operator>=(const String& lhs, const String& rhs) {

	if ((lhs > rhs) || (lhs == rhs))
		return true;

	return false;

}

bool operator>(const String& lhs, const String& rhs) {

	if (lhs < rhs || lhs == rhs)
		return false;

	return true;

}

int String::findch(int pos, char ch) const {

	String sub = substr(pos, length() - 1);

	String temp = sub;
	int location = -1;

	for (int i = 0; i < length(); ++i) {
		if (temp[i] == ch)
			return location = i + pos;
	}

	return location;
}

int String::findstr(int pos, const String& string) const {

	String target = substr(pos, length() - 1);
	int location = -1;

	int position = 0;

	for (int i = 0; i < target.length() + 1; ++i) {

		if (target[i] == string[position]) {

			if (position == 0)
				location = i + pos;

			++position;
		}
		else {

			if(i > 0)
				if(target[i] == target[i - 1]){
					++location;
					continue;	
				}		

			position = 0;
			location = -1;
		}

		if (position == string.length())
			return location;

	}

	return location;
}

std::vector<String> String::split(char token) const {

	std::vector<String> result;

	int i = 0;

	String vecString;

	while (str[i] != 0) {
	
		if (str[i] != token)
			vecString += str[i];
		else {
			result.push_back(vecString);
			vecString = "";
		}

		++i;

	}

	result.push_back(vecString);

	return result;

}

int String::toInt() const {
	
	int result = 0;
	int temp;
	int exp = 1;

	for (int i = length() - 1; i >= 0; --i) {
	
		temp = int(str[i]) - int('0');

		result += (temp * exp);
		exp *= 10;
	
	}

	return result;

}
