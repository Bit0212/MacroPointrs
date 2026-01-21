#include <iostream>
int main() {

  int k[5] = {
      34, 4232, 45, 80, 723,
  }; // initialize an array
  int *g = k; // asign a pointer to that array
  for (int i = 0; i < 5;
       i++) { // created a for loop that goes into each value of the array
    std::cout << *g << std::endl; // shows the value before multiplication
    *g *= 2; // multiplies each value of the array by two via pointer
    std::cout << *g << std::endl; // shows the value multiplicated by two
    std::cout << i
              << std::endl; // shows in which step the for loop is in the array
    g++; // then adds one to the memory of the pointer which makes the array go
         // one step ahead
    if (i == 4) { // this if is for going recursive through the array with the
                  // multiplications applied
      // debug only std::cout << "strassbourg init " << std::endl;

      for (int i = 5; i > 0; i--) {
        std::cout << *g << std::endl;
        g--;
      }
    }
  }

  return 0;
}
