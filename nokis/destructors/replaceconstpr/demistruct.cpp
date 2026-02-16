#include <iostream>
class moris {
  int *e;
  int size;

public:
  moris(int d) : e(new int[d]), size(d) {
    std::cout << "nos hemos creado tio " << std::endl;
    std::cout << d << std::endl;
    *e = d;
  }
  moris(const moris &alter) : e(new int[alter.size]), size(alter.size) {
    std::cout << "copypaste hecho jeje " << std::endl;
    *e = *alter.e;
    std::cout << *e << std::endl;
  }

  ~moris() {
    std::cout << "nos destruimos tio " << std::endl;
    std::cout << *e;
    delete[] e;
  }
};
int main() {
  moris m(3);
  moris d(m);

  return 0;
}
