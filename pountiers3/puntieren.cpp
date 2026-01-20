#include <iostream>
int main() {
  int *p = nullptr; // defines *p as a null pointer//
  int x = 133;      // declares x as int and is equal to 133//
  p = &x; // the memory direction of p becomes the same as the memory direction
          // as x //

  std::cout << *p << "       " << &p << "     " << p << "    " << x << "    "
            << &x; // being *p the value inside the memory direction of x, &p
                   // being the value of the memory direction of p, being p
                   // being the memory direction itself of x//
  p = nullptr;     // returns to its state of null pointer

  return 0;
}
