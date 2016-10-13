#include "vectoradd.h"

#include <iostream>
#include <vector>

int main()
{
  std::vector<int> a;
  std::vector<int> b;
  a.push_back(1);
  a.push_back(2);
  a.push_back(3);

  b.push_back(4);
  b.push_back(5);
  b.push_back(6);

  std::cout << ((a + a) + b)[1] << " (should be 9)" << std::endl;
}
