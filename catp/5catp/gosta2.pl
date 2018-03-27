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

/*
 * continua exibindo o que pedro gosta (leitura e cinema)
 * continua exibindo que pedro gosta de quem gosta de boliche (paulo, maria e vera).
 * como é definido antes que paulo gosta de tudo que maria gosta,
 * então é afirmado que paulo gosta de boliche, então pedro gosta de paulo.
 * como depois é definido que pedro gosta de boliche, então vale que pedro gosta dele mesmo
 * (porque pedro gosta de quem gosta de boliche)
 * então, como pedro gosta de quem gosta de si mesmo,
 * então pedro gosta de si mesmo.... assim entra em loop.
 * Pelo que eu entendi, a cada vez que a regra é aplicada, ele cria uma nova "verdade" no BDI
 * então ele avalia essa verdade logo em seguida.
 * Então, quando ele avalia que ele gosta de quem gosta de si mesmo,
 */
