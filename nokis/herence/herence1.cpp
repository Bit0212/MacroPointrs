#include <iostream>
#include <string>
/* this program is a testing  program for learning about herence in c++
 *Please see this as it is
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */

class manishvod {
  int kami;
  int deimos;
  double takova;
  char mughol;

public:
  int nemonis;
  std::string moi;
  double mah;
};

class menimis : public manishvod {
public:
  void menismas() {
    for (int i = 0; i <= 34; i++) {
      std::cout << "elpepe ";
    }
  }

  menimis() { menismas(); }
  ~menimis() {
    std::cout << "auf wiedersehen alsjeblieft wir lieben dich zu viele "
              << std::endl;
  }
};

int main() {
  manishvod m;
  menimis e;

  return 0;
}
