holiday(friday,may1).
weather(friday,fair).
weather(saturday,fair).
weather(sunday,fair).
weekend(saturday).
weekend(sunday).
/*
 Faremos piquenique em dias do fim de semana com tempo bom ou no dia primeiro de maio
 Observe que duas clausulas que possuem o mesmo lado esquerdo sao
 interpretadas como uma clausula com duas opcoes
*/
picnic(Day) :- weather(Day,fair), weekend(Day), !.
picnic(Day) :- holiday(Day,may1).

% quando falha com friday, retrocede até achar valores verdadeiros.
% após conseguir valores true para weather e weekend, alcança o !, e quando tenta retroceder novamente,
% o ! corta o retrocesso, mostrando apenas a primeira solução que satisfaz a consulta picnic(When).
