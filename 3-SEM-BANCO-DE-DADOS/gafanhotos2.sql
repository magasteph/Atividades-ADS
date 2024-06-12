create table gafanhoto_assistente_curso(
  id int not null auto_increment,
  data date, 
  idgafanhoto int,
  idcurso int, 
  primary key (id),
  foreign key (idgafanhoto) references gafanhotos (id),
  foreign key (idcurso) references gafanhotos (idcurso)  
);

insert into gafanhoto_assistente_curso 
  values (default, '2014-03-01', '1','2'),
  (default, '2015-03-01', '3','6'),
  (default, '2014-01-01', '22','12'),
  (default, '2016-12-01', '1','19');

select g.id, g.nome, a.idgafanhoto, a.idcurso from gafanhotos
  as g join gafanhoto_assiste_curso 
  as a on g.id = a.idgafanhoto;

select g.nome, c.nome from gafanhotos
  as g join gafanhoto_assiste_curso 
  as a on g.id = a.idgafanhoto 
  join cursos.c on c.idcurso = a.idcurso
  order by g.nome;






