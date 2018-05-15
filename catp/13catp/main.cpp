#include <iostream>
#include "Pessoa.h"

using namespace std;

int main(int argc, char **argv)
{
  Pessoa *p;

  p = new Pessoa();

  cout << "minha funcao main " << endl;
  //ano é privado
  //p->ano = 1954;

  delete p;

  return 0;
}
