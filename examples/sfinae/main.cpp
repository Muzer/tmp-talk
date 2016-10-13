#include "sfinae.h"

#include <iostream>

class SteveContainer
{
public:
  typedef int steve;
};

class BobContainer
{
public:
  typedef int bob;
};

int main()
{
  std::cout << "Steve " << has_steve_type<SteveContainer>::value
    << std::endl;
  std::cout << "Bob " << has_steve_type<BobContainer>::value << std::endl;
}
