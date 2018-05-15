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
