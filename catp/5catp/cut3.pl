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
picnic(Day) :- !, weather(Day,fair), weekend(Day).
picnic(Day) :- holiday(Day,may1).

% cortando no início da primeira opção de resposta para picnic(When), impede que a consulta retrocesse para
% verificar a outra alternativa de resposta a picnic(When), exibindo apenas os resultados
% que satisfazem a primeira opção.
