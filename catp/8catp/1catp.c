#include <stdio.h>

int x = 1 ; // global
void inc (int n) {
    x += n;
}

void print (void) {
    printf ("%d", x);
}

void primeiro (void) {
    inc (7);
    print ();
}

void segundo (void) {
    int x = 9;
    inc (3);
    print ();
}

void main (int argc, char **argv) {
    inc (-1);
    primeiro ();
    print ();
    segundo ();
    print ();
}


/*
 * PARA ESCOPO ESTÁTICO:
 * 7
 * 7
 * 10
 * 10
 */

/*
 * PARA ESCOPO DINÂMICO:
 * 7
 * 7
 * 12
 * 7
 * testar com js
 */

/*
 * VARIÁVEIS ESTÁTICAS:
 * a global x na linha 1
 *
 * VARIÁVEIS DINÂMICAS:
 * int n da inc
 * int x da segundo
 * arg e argv
 */
