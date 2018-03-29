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
picnic(Day) :- weather(Day,fair), !, weekend(Day).
picnic(Day) :- holiday(Day,may1).

% escolhendo o primeiro valor verdadeiro para weather (friday), resulta false para weekend.
% quando tenta voltar para escolher um novo resultado pra weather, volta só até o cut,
% então não é capaz de escolher algum outro dia que satisfaça todas as condições,
% resultando em false.
