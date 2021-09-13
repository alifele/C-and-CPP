#include <stdio.h>
#include "Person.h"

int main(){

  Person person;
  person.age = 21;
  person.id = 12;
  person.name = 'a';

  Person_changeAge(&person, 333);
  printf("person age is %d\n", person.age);
  printf("person id is %d\n", person.id);
  printf("person name is %c\n", person.name);

}
