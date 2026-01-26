#include <iostream>
#include <string>
// this is a program made to know about constructors/destructors in c++
class boxin {
public:
  std::string srbija = "serbia is a great nation";
  int keys; // this is an object in a class as normally used
  boxin() { // this is a cosntructor made for creating a default value for the
            // object, in this case, the keys value
    keys = 787; // object that have value
  }
};

int main() {
  boxin b; // summoning the objects of the class(and the constructor(s) too )
  // debug only
  // std::cout<<"we are in the function main "<<std::endl;
  std::cout << b.srbija << "       " << b.keys;

  return 0;
}
