#include <stdio.h>

int main() {
  int a = 1;

  int g(int b) {
    b++;
    a = 3;
    printf("Entrou em g()\nb = %d\na = %d\n", b, a);
    return b;
  }

  // só functiona se chamar a função, obviamente lol
  int t = g(a);
  printf("t = %d\na = %d\n", t, a);
}
