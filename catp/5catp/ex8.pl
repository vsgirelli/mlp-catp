star(sirius). /* star(X) é verdade se X e uma estrela */
star(sol).
star(vega).
orbita(mercurio,sol). /* orbita(X,Y) é verdade se X está na orbita de Y */
orbita(venus,sol).
orbita(terra,sol).
orbita(marte,sol).
orbita(lua,terra).
orbita(phobos,marte).
orbita(deimos,marte).
planeta(B) :- orbita(B,sol). /* planeta(B) é verdade se B é um planeta do sistema solar */

satelite(B) :- orbita(B,P),planeta(P). /* satelite(B) é verdade se B é um satelite de um planeta do sistema solar */

cometa(B) :- not(star(B)),not(planeta(B)),not(satelite(B)). 
/* Agora, o uso da negacao: cometa(B) é verdade se B nao é planeta, nem satelite, nem estrela */

% cometa(halley) resulta em true porque as consultas start(halley), planeta(halley) e satelite(halley)
% todas resultam em false e têm seu resultado negado, fazendo com que cometa(halley) tenha resultado
% final true, o que é correspondente na "vida real"
% cometa(apollo13) também resulta em true, mas na vida real apollo13 não é um cometa.
% orbita(halley, sol) resulta em false, como esperado, já que não há um fato na BD que resulte em true, porém,
% na vida real, novamente é diferente.
% por isso, é necessário cuidado ao modelar a base de dados, pois as informações internas
% podem não ser condizentes com os valores reais.
