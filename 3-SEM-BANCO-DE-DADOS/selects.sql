select nome from gafanhotos where gen = 'mulher';

select * from dados where nasc between '2000-01-01-' and '2015-12-31';

select nome from dados where gen = 'homem' and trab = 'Programadores';

select * from dados where gen = 'mulher' and nacionalidade 'Brasil' and nome like 'J%';

select nome, nacionalidade, peso where gen = 'homem', nacionalidade != 'Brasil' and peso < '100';

select max(altura) from gafanhotos where gen = 'homem' and nacionalidade = 'Brasil';


select avg(peso) from gafanhotos;

select min(peso), nome from gafanhotos where gen = 'mulher' and
  nacionalidade != 'Brasil' and nasc between '1990-01-01' and '2000-12-31';
