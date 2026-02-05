#include <iostream>
/*
 *
 *this is a program made for learning about constructors and destructors

 *
 *
 *
 *
 *
 *
 *made by bit0212 hehehehe from the world to the world
 */

class dairis {

  /*
   * created trustantinosdel for making a screen clearing  with trustantinosdel
   */

  void trustantinosdel() { std::cout << "\033[2J\033[H" << std::endl; }
  /*created byteakilo to convert  bytes to kilobytes
   *
   */
  template <typename T> void ByteAKilo(T a, T b) {
    while (true) {
      trustantinosdel();
      int e = 0;
      std::cout << "hola bienvenidos al convertidor de bytes a kilobytes "
                   "pasame valores\n";
      std::cin >> a;
      std::cout << "hola pasame el otro\n ";
      std::cin >> b;
      std::cout << "bueno tu valorazo es: " << a * 1000;

      std::cout << "deseas continuar?(1 para si 2 para no)\n";
      std::cin >> e;
      if (e == 1) {
        continue;
      } else {
        break;
      }
    }
  }
  /* created kilo a mega to convert  kilobytes to megabytes
   *
   */
  template <typename T> void KiloAMega(T a, T b) {
    while (true) {
      trustantinosdel();

      int e = 0;
      std::cout << "hola bienvenidos al convertidor de kilobytes a megabytes "
                   "pasame valores\n";
      std::cin >> a;
      std::cout << "hola pasame el otro\n ";
      std::cin >> b;
      std::cout << "bueno tu valorazo es: " << a * 1000;
      std::cout << "deseas continuar?(1 para si 2 para no)\n";
      std::cin >> a;
      if (e == 1) {
        continue;
      } else {
        break;
      }
    }
  }
  /*
   * created megaagiga for convert Megabytes to Gigabytes
   *
   */
  template <typename T> void MegaaGiga(T a, T b) {
    while (true) {
      trustantinosdel();

      int e = 0;
      std::cout << "hola bienvenidos al convertidor de megabytes a gigabytes "
                   "pasame valores\n";
      std::cin >> a;
      std::cout << "hola pasame el otro\n ";
      std::cin >> b;
      std::cout << "bueno tu valorazo es: " << a * 1000;
      std::cout << "deseas continuar?(1 para si 2 para no)\n";
      std::cin >> e;
      if (e == 1) {
        continue;
      } else {
        break;
      }
    }
  }

  int maki; // created objects for usage in the constructor
  int manimos;

public:
  // the constructor itself
  dairis(int r, int ar) : maki(r), manimos(ar) {
    while (true) {

      int i = 0;
      std::cout << "hola bienvenidos al constructordestructor\n";
      std::cout << "hoy vengo a convertiros unos numerillos\n";
      std::cout << "especificamente bytes a kilobytes megabytes etc\n";
      std::cout << "especifica que quieres hacer jeje\n";
      std::cout << "1.ByteAkilo\n2.KiloAMega\n3.MegaaGiga\n4.Salir\n";
      std::cin >> i;
      if (i == 1) {
        ByteAKilo(r, ar);
      } else if (i == 2) {
        KiloAMega(r, ar);
      } else if (i == 3) {
        MegaaGiga(r, ar);

      } else {
        break;
      }
    }
  }

  // the destructor itself

  ~dairis() { std::cout << "me voy jeje je je je " << std::endl; }

  // end of class
};
// main function initialized
int main() {
  // class summoned
  dairis d(0, 0);

  return 0;
}
