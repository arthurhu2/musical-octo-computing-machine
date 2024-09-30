// @author Graham Hemingway @copyright 2024 - All rights reserved
#include "print_me.h"
#include <iostream>

PrintMe::PrintMe(std::string A, std::string B, std::string C)
    : a(A), b(B), c(C) {}

std::ostream& operator<<(std::ostream& os, const PrintMe& obj) {
    os << obj.a << obj.b << obj.c;
    return os;
}