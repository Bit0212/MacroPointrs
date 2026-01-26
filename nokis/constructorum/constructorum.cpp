#include <iostream>
class contameir {
public:
  long contateur;
  contameir() { contateur = 10; }
};

int main() {
  contameir c;

  std::cout << c.contateur;

  return 0;
}
