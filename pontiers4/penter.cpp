#include <iostream>

void increment(int *e) { // creating a void function that adds 1 to the value of
                         // the value pointed
  std::cout << "value originelle :" << *e << std::endl;
  (*e)++; // sum of the value
  std::cout << "value neuer : " << *e;
}

int main() {
  int h = 348;   // initial value
  increment(&h); // summoning the function

  return 0;
}
