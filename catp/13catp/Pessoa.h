#include <string>
#include "Data.h"

using namespace std;

class Pessoa 
{
  private:
    string nome;
    string sexo;
    // se nascimento for ponteiro, quando o objeto for instanciado,
    // apenas a referência fica no RA da função que instanciou,
    // o objeto fica no heap.
    // Desse modo, quando o destrutor do objeto for chamado,
    // é necessário desalocar a memória alocada para nascimento.
    // Testar com valgrind.
    Data *nascimento;
    int idade;

  public:
    Pessoa();
    Pessoa(string nome, string sexo, int dia, int mes, int ano, int idade);
    ~Pessoa();
    void setNome(string nome);
    void setSexo(string sexo);
    void setNascimento(int dia, int mes, int ano);
    string getNome();
    string getSexo();
    int getIdade(); 
};
