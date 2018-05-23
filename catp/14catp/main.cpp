#include <iostream>
#include <vector>
#include "Funcionario.h"

using namespace std;

int main(int argc, char **argv)
{
  // vector pra ponteiros pra objetos tipo Pessoa
  // vector<Pessoa*> pessoas(10);
  // chamando assim, ele aloca memória pra 10 objetos tipo Pessoa
  // e chama o construtor padrão pra cada objeto
  // se fosse um <int>, bota o valor default 0

  vector<Pessoa*> pessoas;
  // ao contrário de pessoas(10), reserve só reserva memória
  // pra 10 obejtos, mas não chama construtor
  pessoas.reserve(10);

  // .capacity informa quantos obj cabem no espaço já reservado
  // .size informa quantos obj já existem no vector

  // TIREI A DATA DE NASCIMENTO PORQUE ERA CÓDIGO QUE FIZ PRA
  // TESTAR ALGUMAS COISAS E NÃO VALIA A PENA ADICIONAR AQUI
  Pessoa p("Val", "f", 21);
  Pessoa p1;
  Funcionario val(1200, "Estudante", "Val", "F", 21);
  Funcionario func;

  return 0;
}
