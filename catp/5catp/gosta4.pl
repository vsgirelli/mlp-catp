gosta(pedro,leitura).
gosta(maria,leitura).
gosta(paulo,leitura).
gosta(pedro,cinema).
gosta(paulo,cinema).
gosta(vera,cinema).
gosta(paulo,boliche).
gosta(maria,boliche).
gosta(vera,boliche).
gosta(paulo,X) :- gosta(maria,X).   /* Paulo gosta de tudo que Maria gosta */
gosta(pedro,X) :- gosta(X,boliche). /* pedro gosta de quem gosta de boliche*/
gosta(pedro,boliche).         /* Pedro gosta de boliche */
gosta(pedro,X) :- gosta(X,X). /* Pedro gosta de qualquer um que goste de si mesmo */
combina(X,Y,Z) :- gosta(X,Z), gosta(Y,Z), X\=Y. /* Existe algo (Z) que X e Y gostam? */
