#include "enable_if.h"

#include <iostream>

template <typename T>
typename enable_if<T::first_override != 0, void>::type
print_stuff()
{
  std::cout << "First override" << std::endl;
}

template <typename T>
typename enable_if<T::first_override == 0, void>::type
print_stuff()
{
  std::cout << "Second override" << std::endl;
}

class Dave
{
public:
  enum
  {
    first_override = 1
  };
};

class Jim
{
public:
  enum
  {
    first_override = 0
  };
};

int main()
{
  print_stuff<Dave>();
  print_stuff<Jim>();
}
