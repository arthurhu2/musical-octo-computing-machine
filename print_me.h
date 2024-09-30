// @author Graham Hemingway @copyright 2024 - All rights reserved
#ifndef PRINTME_H
#define PRINTME_H

#include <string>

class PrintMe {
public:
  PrintMe(std::string a, std::string b, std::string c);
  friend std::ostream& operator<<(std::ostream& os, const PrintMe& obj);

private:
  std::string a, b, c;
};

#endif // PRINTME_H
