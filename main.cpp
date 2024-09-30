// @author Graham Hemingway @copyright 2024 - All rights reserved
#include "print_me.h"
#include <iostream>

int main() {
  PrintMe inst("Hello", ", World", "!");

  std::cout << inst << std::endl;

  return 0;
}
