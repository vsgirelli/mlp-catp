/* Uma pessoa desenvolveu o seguinte programa com o objetivo de imprimir na tela
 * o dia da semana por extenso. Para tanto, o programa utiliza a função de sistema
 * denominada time(), que retorna quantos segundos se passaram entre a hora atual
 * e 01/01/1970. Tal resultado é analisado pela função localtime(), que analisa o
 * resultado dado por time() e preenche uma estrutura de dados (tblock) contendo
 * informações sobre a data e a hora local do sistema. Ao executar, a pessoa
 * percebeu que o comportamento do programa é errático, ora funcionando e ora
 * não funcionando, apresentando resultados estranhos. Analise o programa e
 * explique os motivos para tal comportamento ocorrer. Apresente soluções.
 */

#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

char* diaSemana(){
  static char diaExt[][4] = { "dom", "seg", "ter", "qua", "qui", "sex", "sab" } ;
  time_t timer;
  struct tm *tblock;
  timer = time(NULL); // ok
  tblock = localtime(&timer); // ok
  return diaExt[tblock->tm_wday];
}
main(){
  char* dia;
  dia = diaSemana();
  //clrscr();
  system("clear");
  printf("%d %s\n", dia, dia);
}  

/*
 * Como a matriz diaExt é alocada dinamicamente na pilha, quando a função
 * retorna e é desempilhada, o espaço de memória onde a variável havia sido
 * alocada é liberado e pode ser sobrescrito, portanto ao copiar o retorno para
 * char *dia (na main), não sabe-se o que dia pode conter.
 * Soluções seriam: fazer diaExt como global ou static, o que manteria a matriz
 * no segmento de dados.
 */
