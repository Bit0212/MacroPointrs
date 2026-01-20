#include <iostream>
namespace bit {
void swapi(int *e, int *a) {
  int tmp = *e;
  *e = *a;
  *a = tmp;
}

} // namespace bit

int main() {
  int f = 378;
  int ra = 27278;
  std::cout << "f es igual a " << f << std::endl;
  std::cout << "ra es igual a " << ra << std::endl;
  bit::swapi(&f, &ra);
  std::cout << " f es igual a " << f << std::endl;
  std::cout << " ra es igual a " << ra << std::endl;

  return 0;
}
