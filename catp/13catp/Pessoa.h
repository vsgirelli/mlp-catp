#include <string>
#include "Data.h"

using namespace std;

class Pessoa 
{
  private:
  string nome;
  string sexo;
  Data *nascimento;
  int idade;

  public:
  Pessoa();
  ~Pessoa();
  void setNome(string nome);
  void setSexo(string sexo);
  void setNascimento(int dia, int mes, int ano);
  string getNome();
  string getSexo();
  int getIdade(); 
};
