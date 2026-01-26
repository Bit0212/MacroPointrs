#include <iostream>
// the intention of this program is to use constructors easily
// this is a improved version for rectangle.cpp
class geometrique {
public:
  int altura;
  // objects declared
  int base;
  geometrique(int a, int b)
      : base(a), altura(b) {}; // better syntax for constructors
};

int main() {
  // then here i make some arithmetic to those objects to use them lol
  geometrique g(10, 15);
  std::cout << g.altura << "     " << g.base;
  std::cout << "perimetro igual a : " << (g.altura * 2) + (g.base * 2)
            << std::endl;
  std::cout << "area igual a : " << g.altura * g.base << std::endl;

  return 0;
}
