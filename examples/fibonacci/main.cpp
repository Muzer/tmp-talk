#include "fibonacci.h"

#include <iostream>

int main()
{
  std::cout << fibonacci<5>::RET << " " << fibonacci<10>::RET << " "
    << fibonacci<46>::RET << std::endl;
}
