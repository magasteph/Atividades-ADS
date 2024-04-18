CREATE DATABASE if not exists revisão;
USE revisão;

CREATE TABLE if not exists fabricante(
	cod int,
    nome_fab varchar(50) not null,
    constraint pk_codigo primary key(cod)
    
);

CREATE TABLE if not exists produto(
	id int auto_increment,
    nome_prod varchar(50) not null,
    fk_cod int,
    situacao varchar(3) not null default 'ATI',
    constraint pk_produto primary key(id),
    constraint fk_fabricante foreign key (fk_cod) references fabricante(cod)
);

describe fabricante;

insert into fabricante(cod, nome_fab) values (1,'Samsung');

select * from fabricante;

insert into fabricante(cod, nome_fab) values (2,'Xiaomi'), (3,'Apple'), (4,'Motorola');

insert into fabricante(cod, nome_fab) values (5,'LG');

describe produto;

insert into produto(nome_prod) values ('Galaxy S24'),('Redmi Note 9'), ('A50'), ('G20');

select * from produto;

insert into produto(nome_prod, fk_COD, situacao) values ('Galaxy S23',1,'INA'),
	('Galaxy S22',1,'INA'),('POCO FONE X5',2,'ATI'),('Redmi Note 10',2,'ATI');

use faculdade;                                                       
select * from revisão.produto as prod;
use revisão;                               

select substring('botafogo campeão', 10, 7);                     
select lower(nome_prod) as Produtão, 
    substring(upper(nome_prod),2) as 'Resumo do Produto',
    repeat(nome_prod,4) as 'Inútil'
from produto;
insert into produto (nome_prod) values 
       ('Galaxy Poco Note 22'),('Redmi Note 17'),('A50'),('G20');


select nome_prod, 
substring(nome_prod,instr(nome_prod,'note'),50)
from produto;

alter table produto add column dt_lanc date;
alter table produto drop column dt_lanc;
alter table produto add column dt_lanc date;

describe produto;
insert into produto (nome_prod, dt_lanc) values 
       ('Galaxy Poco Note 22', curdate()),
       ('Redmi Note 17',curdate()),
       ('A50','2023-05-01'),('G20','20231118');
select * from produto;
