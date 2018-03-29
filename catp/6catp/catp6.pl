% usar trace no swipl para entender porque usar o corte !
fatorial(0,1) :- !.
% A é o valor X-1
fatorial(X,Y) :- A is X-1, fatorial(A,K), Y is X*K.
% porém, dá pra usar X > 0 também como "corte" dentro da definição de fatorial
%
% CATP 6: fibonacci
fibo(0,1) :- !.
fibo(1,1) :- !.
fibo(X,Y) :- A is X-1, B is X-2, fibo(A,Z), fibo(B,W), Y is Z+W.
