#include <iostream>
#include <stdint.h>
#include "fibo.h"


int main(){
  uint16_t val;
  uint16_t n;
  std::cin >> n;

  val = fibo(n);
  std::cout <<val <<"\n";
}
