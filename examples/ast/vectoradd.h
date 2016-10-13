#include <cstddef>

class Plus
{
public:
  inline static double apply(double a, double b)
  {
    return a + b;
  }
};

template<class L, class Op, class R>
class Expression
{
private:
  const L &d_l;
  const R &d_r;
public:
  Expression(const L &l, const R &r)
    : d_l(l), d_r(r)
  {}

  double operator[](std::size_t i) const
  {
    return Op::apply(d_l[i], d_r[i]);
  }
};

template<class L, class R>
Expression<L, Plus, R> operator+(const L &l, const R &r)
{
  return Expression<L, Plus, R>(l, r);
}
