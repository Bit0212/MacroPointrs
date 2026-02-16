#include <iostream>
int main() {
  int a = 33423;
  int *e = &a;
  int b = 37473;
  int *k = &b;
  k = e;
  *k = 222;

  std::cout << a << "\n" << b;

  return 0;
}
