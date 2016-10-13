#include "animal.h"

#include <iostream>

int main()
{
  Cat cat;
  Dog dog;
  std::cout << cat.walk() << std::endl;
  std::cout << cat.talk() << std::endl;
  std::cout << dog.walk() << std::endl;
  std::cout << dog.talk() << std::endl;
}
