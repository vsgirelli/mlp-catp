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
 * O motor de inferência faz retrocessos até a última escolha feita, portanto,
 * exibe as respostas normais do que pedro gosta (leitura e cinema),
 * e quando encontra gosta(paulo, X) :- gosta(maria, X), faz uma nova árvore pra gosta(maria, X).
 * Não haverá nenhum resultado para essa árvore, pois nada do que paulo gosta é importante no momento.
 * Quando chega em gosta(pedro, X) :- gosta(X, boliche), é feita uma nova árvore para gosta(X, boliche).
 * Nessa árvore, são encontradas as respostas de quem gosta de boliche (paulo, maria e vera),
 * e quando chega em gosta(paulo, X) :- gosta(maria, X), faz novamente uma nova árvore pra gosta(maria, X).
 * Dessa vez, um resultado é importante, que é o resutado que diz que paulo gosta de boliche pois
 * maria também gosta de boliche. Essa resposta é importante quando retorna para a árvore
 * gosta(pedro, X) :- gosta(X, boliche), pois o que se busca ali é que pedro vai gostar de quem
 * gostar de boliche, e sendo que paulo vai gostar do que maria gosta, paulo gosta de boliche, então
 * pedro gosta de paulo.
 * Ainda na árvore gosta(pedro, X) :- gosta(X, boliche), indo para a próxima alternativa,
 * é visto que pedro gosta de boliche também, então pedro gosta de pedro.
 * Depois que sai da árvore acima, vai para gosta(pedro, boliche), então boliche é uma resposta para a pergunta inicial.
 * Como todas as respostas válidas até aquele ponto foram encontradas, o motor de inferência retrocede
 * e vai para a próxima alternativa.
 * Quando chega em gosta(pedro,X) :- gosta(X,X), faz novamente uma árvore, mas entra em loop pois
 * verifica que pedro gosta de pedro (porque pedro gosta de boliche, e pedro gosta de todo mundo que gosta de boliche),
 * e vai encontrar novamente em gosta(pedro, X) :- gosta(X, X), criando nova árvore e etc...
 * Sempre haverá uma resposta verdadeira para gosta(X,X), porque pedro gosta dele mesmo
 */
