library(functional)
mult <- function(a, b, c)
{
    return(a*b*c);
}
dobra <- Curry(function (x, y) x*y , y=2)
tripla <- Curry(mult, b=3)

#dobra2 <- Curry(dobra, a=10)

dobra(2)
tripla(10, 2)
