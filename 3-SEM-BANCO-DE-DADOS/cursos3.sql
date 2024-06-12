create table if not exists cursos(
  idcurso int,
  nome varchar(30) not null unique ,
  descricao text,
  carga int unsigned,
  totaulas int unsigned,
  ano year default '2016'
  primary key (idcurso)  
);

insert into cursos values ('1', 'HTML5', 'Curso de Html5', '40', '37','2014'), 
('2', 'Algoritmos', 'Logica de Programacao','20', '15','2014'),
('3','Photoshop', 'Dicas de Photo', '10','8','2014'),
('4','PHP','curso de php','40','20','2010'),
  ('5', 'Java', 'Introducao', '50','15','2014')
  ('6', 'MYSQL','MYSQL', '30','15','2016'),
  ('7','Word', 'Pacotte Office', '40','30','15','2016'),
  ('8','Sapateado', 'Aprenda', '40','30','2016'),
  ('9', 'Cozinha Arabe', 'Aprenda', '40','30','2018'),
  ('10', 'Youtuber', 'Aprenda', '5','2','2018') ;

describe cursos;

select * from cursos where nome like 'p%';
select * from cursos where nome like 'a%';
select * from cursos where nome like '%a'; 

select count(*) from cursos;

select count(*) from cursos where carga > 40;

select count(nome) from cursos;

select max(carga) from cursos order by carga;

select max(totaulas) from cursos where ano = '2016';

select nome, min(totaulas) from cursos where ano = '2014';

select nome, sum(totaulas) from cursos where ano = '2016';

select avg(totaulas) from cursos where ano = '2015';

