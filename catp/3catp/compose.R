library(functional);
cabeca <- function(lista) lista[[1]];
resto <- function(lista) lista[2:length(lista)];
l <- c(1,40,3,4);
cabeca_do_resto <- Compose(resto, cabeca)
cabeca_do_resto(l);
