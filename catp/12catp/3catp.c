#include <stdio.h>

void swap(int *a, int *b) {
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}
void main() {
  int value = 3, list[5] = {1, 3, 5, 7, 9};
  int i;

  swap(&value, &list[0]);

  printf("value = %d\n", value);
  for(i=0; i<5; i++) {
    printf("list pos %d = %d\n", i, list[i]);
  }
  //Ponto A


  swap(&list[0], &list[1]);

  printf("value = %d\n", value);
  for(i=0; i<5; i++) {
    printf("list pos %d = %d\n", i, list[i]);
  }
  //Ponto B


  swap(&value, &list[value]);

  printf("value = %d\n", value);
  for(i=0; i<5; i++) {
    printf("list pos %d = %d\n", i, list[i]);
  }
  //Ponto C
}
