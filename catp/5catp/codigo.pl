% construindo base de dados
% fazer em ordem
pessoa(maria).
pessoa(joao).
pessoa(leonardo).
pessoa(daniele).
pessoa(ana).
pessoa(jose).
pessoa(marcio).
pessoa(carla).
pessoa(fernando).
pessoa(marcelo).
feminino(maria).
feminino(daniele).
feminino(ana).
feminino(carla).
masculino(joao).
masculino(leonardo).
masculino(jose).
masculino(marcio).
masculino(fernando).
masculino(marcelo).
pai(joao, ana).
pai(joao, jose).
pai(joao, marcio).
pai(leonardo, carla).
pai(leonardo, fernando).
pai(marcio, marcelo).
mae(maria, marcio).
mae(maria, jose).
mae(maria, ana).
mae(daniele, carla).
mae(daniele, fernando).
mae(carla, marcelo).
% o motor de resolução sabe quando chega no fim da BDI
% ele fica procurando em todos os elementos da BDI
% e vai exibindo resultados até trocar de predicado na BDI ou até chegar no fim
% por ex, se eu pedir pai(joao, jose), ele vai procurar só até terminar os predicados de pai
% quando chegar em mãe, ele para de procurar
% pai(X, marcelo),pai(X,Y) informa quem é o pai do marcelo, e também quem é o pai do pai do marcelo
% não pode compor funções pq prolog não retorna nada
irmao(X,Y) :- pai(P,X), pai(P,Y), mae(M,X), mae(M,Y), X \= Y.
