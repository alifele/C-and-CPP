#include "Message.hpp"
#include <cstdlib>
#include <iostream>

int main() {
  Message say_hello("Hello there how are you");
  std::cout << say_hello << '\n';
  Message say_goodbye("gooood bye there");
  std::cout << say_goodbye << '\n';
  return 0;
}
