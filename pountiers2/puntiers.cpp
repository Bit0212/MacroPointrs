#include <iostream>
void quambius(int *punter) { // recieves the pointer that points to x in this
                             // case, being *puntier the pointer//
  std::cout << "x antes valia " << *punter
            << std::endl; // the value of x via pointer before changing it//
  std::cout << "su direccion en memoria es o era " << punter
            << std::endl; // the memory direction of x not the memory of the
                          // pointer itself, that is &punter//
  std::cout << "ingrese su nuevo valor para este puntero que lo pide porfavor"
            << std::endl;
  std::cin >>
      *punter; // ask the user to change the value of x via the pointer *punter
               // that is in reality *puntier because is  *punter is the name
               // that any pointer recieves when enters quambius() funtion//

  std::cout << "x ahora vale " << *punter
            << std::endl; // show the new value of x via the pointer *punter
                          // that is *puntier//
  std::cout
      << "su nuevo valor en memoria es " << punter
      << std::endl; // shows the "new memory direction" of x, that is the same//
}
int main() {
  int x = 37;        // original value of x//
  int *puntier = &x; // creating a pointer with the direction(value of x )//
  quambius(puntier); // a void function to change the value of x//
  std::cout << "desde main mandamos saludos y comprobamos el nuevo valor"
            << std::endl;
  std::cout << x << std::endl; // the new value of x //
  return 0;
}
