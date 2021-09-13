#include <iostream>
#include "func.h"
#include "Person.h"


int main(){

  Person person(12,13);



  std::cout << person.age << "\n";
  std::cout << person.id << "\n";
  std::cout << person.get_id() << "\n";


}
