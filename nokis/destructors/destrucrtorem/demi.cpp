#include <iostream>
class moris {
  int *e;

public:
  moris(int d) : e(new int[d]) {
    std::cout << "nos hemos creado tio " << std::endl;
    std::cout << d << std::endl;
    *e = d;
  }
  ~moris() {
    std::cout << "nos destruimos tio " << std::endl;
    std::cout << *e;
    delete[] e;
  }
};
int main() {
  moris m(3);
  return 0;
}
