#include <iostream>
#include "Data.h"

using namespace std;

Data::Data() 
{
}

Data::Data(int dia, int mes, int ano)
{
  if (dia >= 1 && dia <= 31) {
    this->dia = dia;
  }
  if (mes >= 1 && mes <= 12) {
    this->mes = mes;
  }
  if (checkDigits(ano)) {
    this->ano = ano;
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







