imprime([]):- !.
imprime([H|T]) :- write(H),write(' '),imprime(T).

% Inverte uma Lista
concatenar([], L, L).
concatenar([H|T], L, [H|D]) :- concatenar(T, L, D).
inverte([], []).
inverte([H|T], L) :- inverte(T, X), concatenar(X, [H], L)

% Remove um elemento da lista
remove(X, [X|T], T).
remove(X, [H|T], [H|T1]):- remove(X,T,T1).

/* X e' o ultimo elemento, pois
   a lista contem um unico elemento */
last(X,[X]). 
/* X nao e' o ultimo, pois a lista contem 
   mais elementos, para ser ultimo tem que estar 
   na cauda da lista */
last(X,[_|L]) :- last(X,L).

/insere ordenado/
insere_ordenado(X, [], [X]) :- !. 
insere_ordenado(X, [H|T], [X|[H|T]]) :- X =< H, !. 
insere_ordenado(X, [H|T], [H|Tf]) :- insere_ordenado(X, T, Tf).% Inverte uma Lista
concatenar([], L, L).
concatenar([H|T], L, [H|D]) :- concatenar(T, L, D).
inverte([], []).
inverte([H|T], L) :- inverte(T, X), concatenar(X, [H], L)

% Remove um elemento da lista
remove(X, [X|T], T).
remove(X, [H|T], [H|T1]):- remove(X,T,T1).

/* X e' o ultimo elemento, pois
   a lista contem um unico elemento */
ultimo(X,[X]). 
ultimo(X,[_|L]) :- ultimo(X,L).

/insere ordenado/
insere(X, [], [X]) :- !. 
insere(X, [H|T], [X|[H|T]]) :- X =< H, !. 
insere(X, [H|T], [H|Tf]) :- insere(X, T, Tf).
