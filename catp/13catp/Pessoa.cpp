#include <iostream>
#include "Pessoa.h"

using namespace std;

Pessoa::Pessoa()
{
  // __func__ string with the function name
  // is not a macro
  nome = "Val";
  cout << __func__ << " sendo chamado" << endl;
} 

// paramétrico
Pessoa::Pessoa(string nome, string sexo, int dia, int mes, int ano, int idade)
{
  if (nome.length() != 0) {
    this->nome = string(nome);
  }
  else {
    cout << "Nome incorreto" << endl;
  }

  if (sexo.length() != 0) {
    this->sexo = string(sexo);
  }
  else {
    cout << "Sexo incorreto" << endl;
  }

  nascimento = new Data(dia, mes, ano);
  
  if (idade > 0) {
    this->idade = idade;
  }
  else {
    cout << "Idade incorreta" << endl;
  }
}

Pessoa::~Pessoa()
{
  cout << __func__ << " sendo chamado" << endl;
  delete this->nascimento;
}

string Pessoa::getNome()
{
  // é necessário retornar uma nova string com string()
  // pois string em c++ são ponteiros,
  // e apenas retornando a string nome estaria retornando uma referência a ela
  return string(nome);
}

string Pessoa::getSexo()
{
  return string(sexo);
}

int Pessoa::getIdade()
{
  // calcula idade com base na data atual
  // implementação básica pois não é o objetivo
  return 21;
}

void Pessoa::setNascimento(int dia, int mes, int ano)
{
  nascimento = new Data(dia, mes, ano);
}

void Pessoa::setNome(string nome) 
{
  // é necessário criar uma nova string com string()
  // pois string em c++ são ponteiros,
  // e apenas atribuidno this->nome = nome estaria
  // instanciando this->nome com uma referência ao argumento
  this->nome = string(nome);
}

void Pessoa::setSexo(string nome)
{
  this->sexo = string(sexo);
}










