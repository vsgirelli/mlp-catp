library(magrittr)
library(readr)

# %>% joga o resultado do que ta à direita para o que ta à esquerda
#f() %>% g()
#o resultado de f é passado como parâmetro pra g


f <- function(p) { return(p+1); }
g <- function(p) { return(p+2); }
h <- function() { return(3); }

#f(g(h()));

h() %>%
    g() %>%
    f();

# caso o g tenha que receber um param 3 e depois o resultadod e h
# tem que usar . -> no ponto vai o resultdo de h
#h() %>% g(3, .)

df <- read_csv(./manipulacao.csv);
# fazer um arquivo útil pra testar


# ver função mutate que faz operações de forma paralelizável, tudo em um passo
# várias dessas funções e operandos de manipulação de dados operam em paralelo
