#include <iostream>
#include <string>

template <typename Y> struct maneris {
  Y e;
};

template <typename T> void trusta(T hola) { std::cout << hola; }

int main() {
  maneris m;
  std::cin >> m.e;
  trusta(m.e);

  return 0;
}
