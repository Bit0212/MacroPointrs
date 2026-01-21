#include <iostream>
// this is a simple program which shows how an array can interact with pointers
int main() {
  int e[5] = {
      13, 244, 98, 32, 5,
  }; // array created
  int *kai = e;                 // pointer created taking the array direction
  for (int i = 0; i < 5; i++) { // loop that goes through all the array values
    std::cout << *kai << std::endl; // shows the actual value that is the
                                    // pointer(the array in reality)
    kai++; // then adds 1 to the memory value so the array moves one step ahead
           // making work the loop
  }

  return 0;
}
