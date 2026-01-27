#include <iostream>
class conter { /*class created */
  int x = 334;

public:
  conter() {

    std::cout << "me he creado tio " << std::endl;

    std::cout << x;
    x++;
  } // cosntructor created
  ~conter() { // destuctor summoned
    std::cout << "me he destruido tio" << std::endl;
    x++;
    std::cout << x;
  }
};
int main() {
  conter c;

  return 0;
}
