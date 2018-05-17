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
  cout << "minha funcao main " << endl;

  // Instanciando apenas com Pessoa p, o objeto é alocado na pilha, junto
  // com o RA da main. Quando a função é desempilhada, o objeto é destruído tbm.
  // No entanto, se Pessoa possui um atriibuto Data *nascimento,
  // nascimento teria sido alocado no heap pelo construtor de Pessoa,
  // então seria necessário desalocar do heap no destrutor de Pessoa.

  // INICIALIZANDO COM CONSTRUTOR PARAMÉTRICO
  Pessoa p("Val", "f", 17, 02, 1997, 21);
  // Pessoa p chama o construtor padrão
  // Pessoa p(params) chama o construtor paramétrico

  // EXIBINDO ATRIBUTOS DE p:
  cout << "Nome p: " << p.getNome() << endl;
  cout << "Sexo p: " << p.getSexo() << endl;
  Data d = p.getNascimento();
  cout << "Nascimento dia p: " << d.getDia() << endl;
  cout << "Nascimento mes p: " << d.getMes() << endl;
  cout << "Nascimento ano p: " << d.getAno() << endl;
  cout << "Idade p: " << p.getIdade() << endl;

  cout << endl;

  // INICIALIZANDO COM CONSTRUTOR PADRÃO
  Pessoa p1;

  // EXIBINDO ATRIBUTOS DE p1:
  cout << "Nome p1: " << p1.getNome() << endl;
  cout << "Sexo p1: " << p1.getSexo() << endl;
  Data d1 = p1.getNascimento();
  cout << "Nascimento dia p1: " << d1.getDia() << endl;
  cout << "Nascimento mes p1: " << d1.getMes() << endl;
  cout << "Nascimento ano p1: " << d1.getAno() << endl;
  cout << "Idade p1: " << p1.getIdade() << endl;

  // tentando acessar atributos privados:
  // cout << "Nascimento dia p: " << p.nascimento->dia << endl;
  // tanto nascimento é privado do objeto p, quando dia é privado para nascimento
  // O mesmo vale para qualquer atributo privado, tal como para os métodos:
  //Data data;
  //cout << data.checkDigits() << endl;

  //p = new Pessoa();
  // delete p;
  // delete é usado pra desalocar ponteiros, objetos alocados no heap.

  return 0;
}
