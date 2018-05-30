#include "Aula.h"

using namespace std;

Aula::Aula(){
  hora = 17;
};

Aula::Aula(int inicia){
  hora = inicia;
};

Aula &Aula::operator+ (Aula &b) {
  hora = hora + b.hora;
};

ostream &operator<< (ostream &output, const Aula &aula) {
  output << "\nAula - hora: " << aula.hora << endl;
  return output;
}
