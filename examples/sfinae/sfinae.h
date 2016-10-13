#include <cstddef>

template <typename T>
class has_steve_type
{
  typedef char yes[1];
  typedef char no[2];

  template <typename U>
    static yes &test(typename U::steve *);

  template <typename>
    static no &test(...);

public:
  static const bool value = sizeof(test<T>(NULL)) == sizeof(yes);
};
