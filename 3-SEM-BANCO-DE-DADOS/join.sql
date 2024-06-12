select nome, cursopreferido from gafanhotos;

select nome, ano from cursos;

select g.nome, g.cursopreferido, c.nome, c.ano
  from gafanhotos as g left join curso as c on 
  c.idcurso = g.cursopreferido
  order by g.nome;








