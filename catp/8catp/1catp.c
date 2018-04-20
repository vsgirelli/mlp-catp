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

/* 4 - Indique aonde seriam alocadas as variáveis do código do exercício inicial, considerando o segmento de código, segmento de dados, pilha e monte.
 * A variável x (global, linha 1) seria alocada no segmento de dados do
 * programa, em tempo de compilação.
 * O resto das variáveis seria alocada na pilha em tempo de execução, junto com
 * com o registro de ativação de cada função.
 * Nenhuma variável é alocada no heap.
 */

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
