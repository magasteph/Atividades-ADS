CREATE DATABASE revisão;
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
														('Galaxy S22',1,'INA'),
														('POCO FONE X5',2,'ATI'),
														('Redmi Note 10',2,'ATI');
