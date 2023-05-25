#include <iostream>

class Empty {
public:
  void useful_function();
};

class Derived : private Empty {
  int i;
};

class Composed {
  int i;
  Empty e;
};

int main() {
  auto o1 = new Empty();
  auto o2 = new Derived();
  auto o3 = new Composed();

  std::cout << "Empty: " << sizeof(Empty) << " " << sizeof(o1) << std::endl;
  std::cout << "Derived: " << sizeof(Derived) << " " << sizeof(o2) << std::endl;
  std::cout << "Composed: " << sizeof(Composed) << " " << sizeof(o3) << std::endl;
}