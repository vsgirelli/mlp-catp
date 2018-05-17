#include <iostream>
#include "Pessoa.h"

using namespace std;

Pessoa *foo()
{
  // Tendo *p, p é alocado no heap, e pode-se retornar o ponteiro
  // para o objeto. Assim, não perde-se o objeto.
  Pessoa *p =  new Pessoa();
  return p;
}

int main(int argc, char **argv)
{
  // Instanciando apenas com Pesso p(), o objeto é alocado na pilha, junto
  // com o RA da main. Quando a função é desempilhada, o objeto é destruído tbm.
  // No entanto, se Pessoa possui um atrito Data *nascimento,
  // nascimento teria sido alocado na pilha pelo construtor de Pessoa,
  // então seria necessário desalocar da pilha no destrutor de Pessoa.
  Pessoa p("Val", "f", 17, 02, 1997, 21);
  cout << p.getNome() << endl;
  // Pessoa p() chama o construtor padrão
  // Pessoa p(params) chama o construtor paramétrico
 
  //p = new Pessoa();

  cout << "minha funcao main " << endl;

  // delete p;
  // delete é usado pra desalocar ponteiros, objetos alocados no heap.

  return 0;
}
