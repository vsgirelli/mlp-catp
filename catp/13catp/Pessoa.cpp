#include <iostream>
#include "Pessoa.h"

using namespace std;

Pessoa::Pessoa()
{
  // __func__ string with the function name
  // is not a macro
  cout << __func__ << " sendo chamado no construtor padrão" << endl;
  this->nascimento = new Data();
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

  this->nascimento = new Data(dia, mes, ano);
  
  if (idade > 0) {
    this->idade = idade;
  }
  else {
    cout << "Idade incorreta" << endl;
  }

  cout << __func__ << " sendo chamado" << endl;
}

Pessoa::~Pessoa()
{
  cout << __func__ << " sendo chamado" << endl;
  delete nascimento;
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
  nascimento->setDia(dia);
  nascimento->setMes(mes);
  nascimento->setAno(ano);
  // usar setters privados que só o atributo nascimento mesmo pode acessar
}

void Pessoa::setNome(string nome) 
{
  // é necessário criar uma nova string com string()
  // pois string em c++ são ponteiros,
  // e apenas atribuidno this->nome = nome estaria
  // instanciando this->nome com uma referência ao argumento
  if (nome.length() != 0) {
    this->nome = string(nome);
  }
  else {
    cout << "Nome incorreto" << endl;
  }
}

void Pessoa::setSexo(string nome)
{
  if (sexo.length() != 0) {
    this->sexo = string(sexo);
  }
  else {
    cout << "Sexo incorreto" << endl;
  }
}

Data Pessoa::getNascimento()
{
  return *nascimento;
}

void Pessoa::setIdade(int idade)
{
  if (idade > 0 ) {
    this->idade = idade;
  }
  else {
    cout << "Idade incorreta" << endl;
  }
}







