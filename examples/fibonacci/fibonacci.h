template <int N>
class fibonacci
{
public:
  enum
  {
    RET = fibonacci<N-1>::RET + fibonacci<N-2>::RET
  };
};

template<>
class fibonacci<1>
{
public:
  enum
  {
    RET = 1
  };
};

template<>
class fibonacci<2>
{
public:
  enum
  {
    RET = 1
  };
};
