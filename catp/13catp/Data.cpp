#include <iostream>
#include "Data.h"

using namespace std;

Data::Data() 
{
  cout << __func__ << " sendo chamado no construtor padrão" << endl;
  this->dia = 0;
  this->mes = 0;
  this->ano = 0;
}

Data::Data(int dia, int mes, int ano)
{
  cout << __func__ << " sendo chamado" << endl;
  if (dia >= 1 && dia <= 31) {
    this->dia = dia;
  }
  else {
    cout << "Dia incorreto" << endl;
  }

  if (mes >= 1 && mes <= 12) {
    this->mes = mes;
  }
  else {
    cout << "Mes incorreto" << endl;
  }

  if (checkDigits(ano)) {
    this->ano = ano;
  }
  else {
    cout << "Ano incorreto" << endl;
  }

}

Data::~Data()
{
}

int Data::getDia()
{
  return dia;  
}

int Data::getMes()
{
  return mes;
}

int Data::getAno()
{
  return ano;
}

int Data::checkDigits(int ano)
{
  int length = 1;
  while (ano /= 10 ) {
    length++;
  }
  if (length == 4) {
    return 1;
  }
  return 0;
}

void Data::setDia(int dia)
{
  if (dia >= 1 && dia <= 31) {
    this->dia = dia;
  }
  else {
    cout << "Dia incorreto" << endl;
  }
}

void Data::setMes(int mes)
{
  if (mes >= 1 && mes <= 12) {
    this->mes = mes;
  }
  else {
    cout << "Mes incorreto" << endl;
  }
}

void Data::setAno(int ano)
{
  if (checkDigits(ano)) {
    this->ano = ano;
  }
  else {
    cout << "Ano incorreto" << endl;
  }
}



