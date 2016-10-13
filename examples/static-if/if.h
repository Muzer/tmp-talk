template<bool Cond, class Then, class Else>
class IF
{
public:
  typedef Then RET;
};

template<class Then, class Else>
class IF<false, Then, Else>
{
public:
  typedef Else RET;
};
