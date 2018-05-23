#include <iostream>
#include "Pessoa.h"

class Funcionario : Pessoa {
  private:
    float salario;
    //“Indefinido”, “Programador”, “Analista”, sendo “Indefinido” o valor default
    string cargo;

  public:
    Funcionario();
    Funcionario(float sal, string car, string nome, string sexo, int idade);
    ~Funcionario();
    void setSalario(float sal);
    void setCargo(string car);
    float getSalario();
    // cuidar pra não retornar a string direto
    // pois quebra encapsulamento
    string getCargo();

  private:
    int checkCargo(string cargo);
};
