#include "stack.hpp"
#include "../string/string.hpp"
#include <iostream>

#ifndef UTILITIES_HPP
#define UTILITIES_HPP

void infix_to_postfix(std::istream& in, std::ostream& out);
void infix_to_prefix(std::istream& in, std::ostream& out);
void evaluate_postfix(String left, String t, String right, int tmpCount, std::ostream& out);
void evaluate_prefix(String, String, String, int, std::ostream&);
void prefix_to_assembly(std::istream& in, std::ostream& out);
void postfix_to_assembly(std::istream& in, std::ostream& out);
String int_to_string(int x);
void reverseString(String& str, int start, int end);

#endif
