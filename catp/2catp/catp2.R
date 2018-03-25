
vezes <- function(lista, num) {
  if (length(lista) > 0) {
    # head returns a list, so we have to access it's first element
    mult <- list(head(lista, n=1)[[1]] * num, vezes(tail(lista, length(lista) - 1), num));
    unlist(mult);
  }
}

vezes(list(1,2,3,4,5,6), 7);


inverte <- function(lista) {
  if (length(lista) > 0) {
    inv <- list(tail(lista, n=1), inverte(head(lista, length(lista) - 1)));
    unlist(inv);
  }
}

inverte(list(1,2,3,4,5,6,7));

expoente <- function(lista, exp) {
  if (length(lista) > 0) {
    exp <- list(lista[[1]] ^ exp, expoente(tail(lista, length(lista) -1), exp));
    unlist(exp);
  }
}

expoente(list(1,2,3,4,5), 2);
