create table pessoas(
  id int not null auto_increment,
  nome varchar(30) not null,
  nascimento date,
  sexo enum('M', 'F'),
  peso decimal (5,2),
  altura decimal(3,2),
  nacionalidade varchar(20) defaut 'Brasil',  
  primary key(id)
);

describe pessoas;

alter table pessoas add column profissao varchar(10);

select * from pessoas;

alter table pessoas drop column profissao;

alter table pessoas add column pessoas varchar(10) after nome;

alter table pessoas add column pessoas varchar(10) first;

alter table pessoas modify column pessoas varchar(20);

alter table pessoas change column profissao prof varchar(20);

alter table pessoas rename to gafanhotos;



