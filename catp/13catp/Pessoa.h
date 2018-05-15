#include <string>
#include "Data.h"

using namespace std;

class Pessoa 
{
  private:
  string nome;
  Data nascimento;
  int ano;
  int sexo;
  int idade;

  // se não declarar como públicos, dá erro pq considera direto como privado
  public:
  Pessoa();
  ~Pessoa();
};
