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
/*
 * A pesquisa manteve as coisas que pedro gosta, que é leitura e cinema
 * e unificou X ao resultado de gosta(X, boliche), então todos que gostam de boliche
 * também são resultado para quem pedro gosta.
 */
