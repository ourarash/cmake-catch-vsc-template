
#include <iostream>
#include <vector>

#include "cpplib.h"

int main(int argc, const char *argv[]) {
  CPPLib my_lib;
  auto greeting = my_lib.GetGreetingMessage();

  std::cout << greeting << std::endl;
  return 0;
}
