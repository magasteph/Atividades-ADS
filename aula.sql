create schema if not exists aula005;

use aula005;

create table if not exists tipo_pessoa(
	cod_tipo_pessoa int,
    desc_tipo_pessoa varchar(100)
);

create table if not exists pessoa(
	cod_pessoa int,
    nom_pessoa varchar(250),
    cpf_pessoa varchar(16),
    rg_pessoa varchar(12),
    email_pessoa varchar(100),
    dta_nasc_pessoa date,
    idf_sexo varchar(1),
    cod_tipo_pessoa int
);

create table if not exists fabricantes(
	cod_fabricante int,
    nom_fabrincante varchar(100),
    site_fabricante varchar(250),
    idf_ativo varchar(1)
);

create table if not exists categoria(
	cod_categoria int,
    nom_categoria varchar(45),
    idf_ativo varchar(1)
);

drop table pessoa;

create table if not exists pessoa(
	cod_pessoa int,
    nom_pessoa varchar(250),
    cpf_pessoa varchar(16),
    rg_pessoa varchar(12),
    email_pessoa varchar(100),
    dta_nasc_pessoa date,
    idf_sexo varchar(1),
    cod_tipo_pessoa int, 
    constraint pk_pessoa primary key (cod_pessoa)
);

drop table pessoa;

drop table tipo_pessoa;

create table if not exists pessoa(
	cod_pessoa int not null auto_increment,
    nom_pessoa varchar(250),
    cpf_pessoa varchar(16),
    rg_pessoa varchar(12),
    email_pessoa varchar(100),
    dta_nasc_pessoa date,
    idf_sexo varchar(1),
    cod_tipo_pessoa int, 
    constraint pk_pessoa primary key (cod_pessoa),
    constraint fk_tipo_pessoa foreign key (cod_tipo_pessoa)
    references tipo_pessoa (cod_tipo_pessoa)
);
