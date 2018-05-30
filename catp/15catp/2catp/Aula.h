#include <iostream>

using namespace std;

class Aula {
  public:
    int hora;
    Aula();
    Aula(int inicia);
    Aula &operator+ (Aula &b);
};

ostream &operator<< (ostream &output, const Aula &aula);
