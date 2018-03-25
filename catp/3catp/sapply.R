#  TESTAR
#lapply(1:3, function(x) x^2);
#sapply(1:3, function(x) x^2);
#apply(1:3, function(x) x^2);

f <- function (x, ...) {
	# como eu não sei o que é, eu tenho que primeiro transformar em lista
	dots <- list(...);
	if (length(dots) == 0) return(NULL);
	cat("\nThe arguments in ... are: \n");
	print(unlist(dots));
	# não chama com dots pq senão entra em loop
	f(...);
}

#f(1,2,3,"a", list("monkey"));

soma <- function(l) {
    if (length(l) == 0) return(0);
    h <- head(l, n = 1)[[1]];
    t <- tail(l, n = length(l)-1);
    return(h+soma(t));
}
#soma(c(1, 2, 3, 4, 5));


# ANALISAR POR QUE NÃO FUNCIONA
soma <- function(...) {
    l <- list(...)
    if(length(l) == 0) return(0)
    h <- head(l, n = 1)[[1]];
    t <- tail(l, n = length(l)-1);
    return(h+soma(t));
}
#soma(1, 2, 3, 4, 5);

library(functional);
cabeca <- function(lista) lista[[1]];
resto <- function(lista) lista[2:length(lista)];
l <- c(1,2,3,4);
cabeca_do_resto <- Compose(resto, cabeca)
#cabeca_do_resto(l);

mult <- function(a, b)
{
    return(a*b);
}
dobra <- Curry(mult, a=2)
tripla <- Curry(mult, a=3)

dobra(10)
tripla(10)
