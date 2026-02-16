#include <iostream>
#include <string>
class maristroik {
public:
  void vivaperu() {
    std::cout << "viva la deutscher nacion grande un saludo \n";
  }
  int dat;
  std::string doi;
  maristroik(int kat, std::string e) : dat(kat), doi(e) {
    std::cout << "hola soy peruano y me llamo \n"
              << doi << "y tengo " << dat << "años";
  }
};

int main() {
  maristroik m(3, "viva perú ");

  maristroik *k = &m;
  std::cout << k->doi << "\n";
  k->dat = 343;
  k->doi = "viva peruuu hermano viva peru\n";
  k->vivaperu();
  std::cout << "hola buenaas mire esto jeje \n"
            << k->dat << "y esto jeje \n"
            << k->doi;
  return 0;
}
