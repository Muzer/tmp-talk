#include <string>

template<typename T>
class Animal
{
protected:
  std::string walk_impl()
  {
    return "Walking generically";
  }

  std::string talk_impl()
  {
    return "Talking generically";
  }

public:
  std::string walk()
  {
    return static_cast<T*>(this)->walk_impl();
  }

  std::string talk()
  {
    return static_cast<T*>(this)->talk_impl();
  }
};

class Dog : public Animal<Dog>
{
  friend class Animal<Dog>;
protected:
  std::string talk_impl()
  {
    return "Woof!";
  }
};

class Cat : public Animal<Cat>
{
  friend class Animal<Cat>;
protected:
  std::string talk_impl()
  {
    return "Miaow!";
  }
};
