#include "if.h"

#include <cstring>
#include <iostream>

template<typename T>
class wrap
{
public:
  void operator()(char *a)
  {
    char n[sizeof(T)];
    memset(n, '\0', sizeof(T));
    strncpy(n, a, sizeof(T));
    T out = *(reinterpret_cast<T *>(n));
    // send to some horrible horrible service
    std::cout << out << std::endl;
  }
};

int main()
{
  char a[] = "abc";
  wrap<IF<sizeof(a) <= sizeof(int), int, long long>::RET>()(a);
}
