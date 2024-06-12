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

select * from cursos;

select * from cursos order by nome desc;

select nome, carga, ano from cursos order by nome;

select ano, nome, carga from cursos order by ano, nome;

select * from cursos where ano = '2016' order by nome;

select ano, carga from cursos where ='2016' order by nome;

select ano, descricao from cursos where ano <= '2016' order by nome;

select nome, ano from cursos where ano between '2014' and '2016';

select nome, descricao, ano from cursos where ano in ('2014','2016') order by ano;

select * from cursos where carga > 35 and totaulas <30;

select * from cursos where carga > 35 or totaulas <30;
