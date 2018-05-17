// tentar tirar iostream daqui
#include <iostream>
#include "Pessoa.h"

using namespace std;

Pessoa::Pessoa()
{
  // __func__ string with the function name
  // is not a macro
  cout << __func__ << " sendo chamado" << endl;
} 

Pessoa::~Pessoa()
{
  cout << __func__ << " sendo chamado" << endl;
}

string Pessoa::getNome()
{
  return nome;
}

string Pessoa::getSexo()
{
  return sexo;
}

int Pessoa::getIdade()
{
  // calcula idade com base na data atual
}

void Pessoa::setNascimento(int dia, int mes, int ano)
{
  nascimento = new Data(dia, mes, ano);
}

void Pessoa::setNome(string nome) 
{
  this->nome = nome;
}

void Pessoa::setSexo(string nome)
{
  this->sexo = sexo;
}
