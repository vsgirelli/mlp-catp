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
