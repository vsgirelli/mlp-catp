library(functional)

# Elaborar a função construir, que recebe uma lista de funções e um argumento.
# Ela deve retornar uma lista correspondente a aplicação de cada função da lista de entrada ao argumento.
# f <- function (x) x*x
# g <- function (x) x*x*x
# h <- function (x) x*x*x*x
# lista <- c(f, g, h);
#[1]  4  8 16


# pegar cada uma das funções presentes em lista, e aplicar sobre o argumento arg
 construir <- function(lista, arg) {
	 if(length(lista) != 0) {
		 unlist(list(lista[[1]](arg), construir(tail(lista, n=length(lista) -1), arg)));
	 }
 }

#construir(lista, 2);


#Transforme as funções do exercício anterior em funções que recebam dois argumentos (e não uma lista com dois valores).
#Reimplemente então a função construir, nomeandoa cdonstruirdois, de forma a aceitar uma lista de funções e demais argumentos,
#retornando uma lista correspondente a aplicação de cada função da primeira lista de entrada aos argumentos seguintes.
f <- function (x, y) x*y
g <- function (x, y) x*y*2
h <- function (x, y) x*y*3
l <- list(f, g, h);
#[1]  8 16 24

#arg1 = 2;
#arg2 = 4;
#lapply(arg, lista[[1]]);
#l[[1]](arg1, arg2);
# fiz isso pra testar se funcionava sem lapply, e funciona, mas então qual o objetivo do catp?

construirdois <- function(lista, arg1, arg2) {
  if (length(lista) != 0) {
    unlist(list(lista[[1]](arg1, arg2),
                 construirdois(tail(lista, n=length(lista) - 1),
                               arg1, arg2
                               )
                 )
    );
  }
}

#construirdois(l, 2, 4);

# Elabore uma função duplica que receba uma lista e devolva uma lista com os elementos duplicados
# (multiplicados por 2), usando lapply e funções anônimas.
duplica <- function(lista) {
	unlist(lapply(lista, function(x) x * 2 ));
}

#duplica(list(1,2,3,4,5,6,7));

# Elabore uma função cujo nome é soma que some os elementos de uma lista usando apenas recursão (sem laços iterativos).
soma <- function(lista) {
  # como head(lista) retorna uma lista,
  # se eu tentar somar head(lista) a algo vai dar erro
  # pois não tem como somar uma lista
  # o mesmo acontece com tail
  if (length(lista) != 0) {
    #print(lista[[1]]);
    #print(head(tail(lista, n=length(lista) - 1), n=1));
    lista[[1]] + soma(tail(lista, n=length(lista) - 1));
  }
  else {
    return(0);
  }
}

#soma(list(1,2,3));

# Usando lapply e funções anônimas, elabore uma função positivos que receba uma lista
# e devolva uma lista indicando se os elementos são positivos (TRUE) ou negativos (FALSE).

positivos <- function(lista) {
  unlist(lapply(lista, function(x) {
      if(x >= 0) {
        TRUE;
      }
      else {
        FALSE;
      }
    }));
}

#positivos(c(-1, 2, -4));


# Elabore uma função norma que receba uma lista, representando um vetor euclidiano,
# e calcule a norma quadrática de tal vetor, conforme a definição seguinte:
# ||V|| = \sqrt{x_1^2 + x_2^2 + ... + x_n^2}
# ou seja, o somatório do quadrado dos números presentes em tal lista.
# Deve retornar 0.547722557505

norma <- function(lista) {
  power <- lapply(lista, function(x) x * x);
  #print(power);
  sqrt(soma(power));
}


#norma(c(0.1, 0.2, 0.3, 0.4));


