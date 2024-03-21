CREATE DATABASE concessionaria;

USE concessionaria;

create table if not exists tipo_veiculo (
	cod_tipo_veiculo INT NOT NULL AUTO_INCREMENT,
    dsc_tipo_veiculo VARCHAR(45) NOT NULL,
    CONSTRAINT pk_tipo_veiculo PRIMARY KEY (cod_tipo_veiculo)    
);

create table if not exists marca(
	cod_marca INT NOT NULL AUTO_INCREMENT,
    nome_marca VARCHAR(45) NOT NULL,
    nom_marca_fipe VARCHAR(45),
    key_marca VARCHAR(45),
    id_marca_fipe VARCHAR(45),
    CONSTRAINT pk_cod_marca PRIMARY KEY (cod_marca)
);
create table if not exists tabela(
	cod_veiculo INT NOT NULL AUTO_INCREMENT,
    nome_veiculo VARCHAR(45) NOT NULL,
    nome_veiculo_fipe VARCHAR(45),
    key_veiculo_fipe VARCHAR(45),
    id_veiculo_fipe VARCHAR(15),
    fk_cod_marca INT,
    fk_cod_tipo_veiculo INT,
    CONSTRAINT pk_cod_veiculo PRIMARY KEY (cod_veiculo),
    CONSTRAINT fk_tipo_veiculo FOREIGN KEY (fk_cod_marca) references marca (cod_marca),
    CONSTRAINT fk_marca FOREIGN KEY (fk_cod_tipo_veiculo) references tipo_veiculo (cod_tipo_veiculo)
);
create table if not exists modelo(
	seq_modelo INT NOT NULL AUTO_INCREMENT,
    dsc_modelo VARCHAR(100) NOT NULL,
    key_modelo_fipe VARCHAR(20),
    cod_modelo_fipe VARCHAR(20),
    id_modelo_fipe VARCHAR(20),
    fk_cod_veiculo INT,
    CONSTRAINT pk_seq_modelo PRIMARY KEY (seq_modelo),
    CONSTRAINT fk_cod_veiculo FOREIGN KEY (fk_cod_veiculo) references tabela(cod_veiculo)
);
create table if not exists valor_veiculo(
	seq_valor_veiculo INT NOT NULL AUTO_INCREMENT,
    mes_ref_valor_veiculo INT NOT NULL, 
    ano_ref_valor_veiculo YEAR NOT NULL,
    dsc_veiculo VARCHAR(100) NOT NULL,
    pco_valor_veiculo decimal(10,2),
    key_veiculo VARCHAR(20),
    id_veiculo_fipe VARCHAR(20),
    cod_veiculo_fipe VARCHAR(20),
    fk_seq_modelo INT,
    CONSTRAINT pk_seq_valor_veiculo PRIMARY KEY (seq_valor_veiculo),
    CONSTRAINT fk_seq_modelo FOREIGN KEY (fk_seq_modelo) references modelo(fk_seq_modelo)
);
DROP TABLE valor_veiculo;
create table if not exists valor_veiculo(
	seq_valor_veiculo INT NOT NULL AUTO_INCREMENT,
    mes_ref_valor_veiculo INT NOT NULL, 
    ano_ref_valor_veiculo YEAR NOT NULL,
    dsc_veiculo VARCHAR(100) NOT NULL,
    pco_valor_veiculo decimal(10,2),
    key_veiculo VARCHAR(20),
    id_veiculo_fipe VARCHAR(20),
    cod_veiculo_fipe VARCHAR(20),
    fk_seq_modelo INT,
    CONSTRAINT pk_seq_valor_veiculo PRIMARY KEY (seq_valor_veiculo),
    CONSTRAINT fk_seq_modelo FOREIGN KEY (fk_seq_modelo) references modelo(fk_seq_modelo)
);
