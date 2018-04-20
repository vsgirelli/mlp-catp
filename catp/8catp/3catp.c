int x = 0;
void foo (int a){
  static int b = 0;
  int c = a * 2;
  b++;
}
void main (void){
  int d = 10;
  float *e = malloc (sizeof(float));
  foo(d);
  free(e);
}

/*
 * VARIÁVEIS ESTÁTICAS:
 * int x linha 1
 * static int b da função foo
 *
 * VARIÁVEIS DINÂMICAS
 * int a em foo
 * int c em foo
 * float *e, alocado na pilha
 * endereço apontado por float *e, alocado no monte
 */

/* 4 - Indique aonde seriam alocadas as variáveis do código, considerando o segmento de código, segmento de dados, pilha e monte.
 * as variáveis x (linha 1) e static int b são alocadas no segmento de código em
 * tempo de compilação.
 * as variáveis int a (linha 2), int c (linha 4), int d (linha 7) e o ponteiro
 * float *e são alocados na pilha em tempo de execução, junto com os registros
 * de ativação de cada função.
 * o espaço de memória para o qual o ponteiro float *e aponta é alocado no heap,
 * também em tempo de execução.
 *
