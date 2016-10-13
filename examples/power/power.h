template<int n>
inline int power(int m)
{
  return power<n-1>(m) * m;
}

template<>
inline int power<0>(int m)
{
  return 1;
}

template<>
inline int power<1>(int m)
{
  return m;
}
