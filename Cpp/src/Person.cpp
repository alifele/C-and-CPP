#include "Person.h"
#include <iostream>


Person::Person(int age, int id){
  this->age = age;
  this->id = id;
}


int Person::get_id(void){
  return this->id;
}
