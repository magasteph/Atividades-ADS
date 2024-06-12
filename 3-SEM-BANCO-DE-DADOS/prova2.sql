create table if not exists cursos(
  nome varchar(30) not null unique ,
  descricao text,
  carga int unsigned,
  totaulas int unsigned,
  ano year default '2016'
);

describe cursos;

alter table cursos add column idcurso int first;

alter table cursos add primary key (idcurso);

insert into cursos values ('1', 'HTML4', 'Curso de Html5', '40', '37','2014'), 
('2', 'Algoritmos', 'Logica de Programacao','20', '15','2014'),
('3','Photoshop', 'Dicas de Photo', '10','8','2014'),
('4','pgp','curso de php','40','20','2010'),
  ('5', 'Jarva', 'Introbucao', '50','15','2014');

select * from cursos;

update cursos set nome = 'HTML5' where idcurso = '1';

update cursos set nome = 'PHP', ano = '2015' where idcurso = '4';

update cursos set nome = 'Java', descricao = 'Introdução', 
  carga = '40', ano = '2015' where idcurso = '5';

delete from cursos where id = '3';

delete from cursos where ano '2014';

truncate cursos; 
