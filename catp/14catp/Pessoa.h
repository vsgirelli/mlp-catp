#include <string>

using namespace std;

class Pessoa 
{
  private:
    // TIREI A DATA DE NASCIMENTO PORQUE ERA CÓDIGO QUE FIZ PRA
    // TESTAR ALGUMAS COISAS E NÃO VALIA A PENA ADICIONAR AQUI
    string nome;
    string sexo;
    int idade;

  public:
    Pessoa();
    // construtor paramétrico do filho deve também receber os args do
    // construtor paramétrico do pai
    Pessoa(string nome, string sexo, int idade);
    ~Pessoa();
    void setNome(string nome);
    void setSexo(string sexo);
    void setIdade(int idade);
    string getNome();
    string getSexo();
    int getIdade(); 
};
