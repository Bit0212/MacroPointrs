#include <iostream>
// the intention of this program is to use constructors easily
class geometrique {
public:
  int altura;
  // objects declared
  int base;
  geometrique(int a, int b) { // constructor that needs to variables(this is not
                              // a void function)
    // asignated each object to each variable in the constructor
    altura = a;
    base = b;
  }
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
