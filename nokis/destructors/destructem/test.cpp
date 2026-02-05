#include <iostream>
/*
 *
 *
 *
 *
 *
 * this is a testing program for fucntion usage
 *
 *
 *
 */
int main() {

  std::cout << "hola buenas a todos " << std::endl;
  std::cout << "presiona un boton " << std::endl;
  std::cout << "ahora voy a liberar la pantalla" << std::endl;
  std::cout << "\033[2J\033[H";
  std::cout << "la pantalla ya esta limpia" << std::endl;

  return 0;
}
