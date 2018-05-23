#include <iostream>
#include <string>
#include "Funcionario.h"

#define ENUM_SIZE 3

using namespace std;

Funcionario::Funcionario()
  : Pessoa() // chama o construtor padrão da classe pai (sem params)
{
  salario = 0;
  cargo = string("Indefinido");
}

// construtor paramétrico que também inicializa os campos da classe pai
// chamando o construtor paramétrico da classe pai
Funcionario::Funcionario(float sal, string car, string nome, string sexo, int idade)
  : Pessoa(nome, sexo, idade)
{
  if (sal < 0) {
    cout << "Salário incorreto" << endl;
  }
  else {
    salario = sal;
  }
  if(checkCargo(car)) {
    cout << "Cargo incorreto para funcionário " << nome << endl;
    cout << "Valor padrão: Indefinido" << endl;
    cargo = string("Indefinido");
  }
  else {
    cargo = string(car);
  }
}

Funcionario::~Funcionario() {}

void Funcionario::setSalario(float sal) {
  if (sal < 0) {
    cout << "Salário incorreto" << endl;
    salario = 0;
  }
  else {
    salario = sal;
  }
}

void Funcionario::setCargo(string car) {
  if(checkCargo(car)) {
    cout << "Cargo incorreto" << endl;
    cout << "Valor padrão: Indefinido" << endl;
    cargo = string("Indefinido");
  }
  else {
    cargo = string(car);
  }
}

float Funcionario::getSalario() {
  return salario;
}

// cuidar pra não retornar a string direto
// pois quebra encapsulamento
string Funcionario::getCargo() {
  return string(cargo);
}

int Funcionario::checkCargo(string cargo) {
  int i;
  if (cargo.compare("Indefinido") == 0) {
    return 0;
  }
  if (cargo.compare("Programador") == 0) {
    return 0;
  }
  if (cargo.compare("Analista") == 0) {
    return 0;
  }
  return 1;
}
