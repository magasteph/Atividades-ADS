CREATE DATABASE escola;
USE escola;

CREATE TABLE if not exists aluno (
	matricula_aluno INT NOT NULL,
    cpf INT NOT NULL,
    nome VARCHAR(50) NOT NULL,
    data_nasc DATE NOT NULL ,
    constraint pk_matricula_aluno primary key (matricula_aluno),
	constraint uq_cpf unique (cpf)
);

CREATE TABLE if not exists curso(
	id_curso INT NOT NULL AUTO_INCREMENT ,
    descricao VARCHAR(50),
    constraint pk_curso primary key (id_curso)
);


CREATE TABLE if not exists disciplina (
	id_disciplina INT NOT NULL,
    nome_disciplina VARCHAR(50),
    carga_horario INT,
    fk_curso INT,
    constraint pk_disciplina primary key (id_disciplina),
    constraint fk_curso_disciplina foreign key (fk_curso) references curso(id_curso)    
);

CREATE TABLE if not exists aluno_disciplina (
	matricula_aluno INT NOT NULL,
	id_disciplina INT,
	constraint pk_aluno_disciplina primary key (matricula_aluno, id_disciplina),
    constraint fk_aluno_disciplina1 foreign key (matricula_aluno) references aluno (matricula_aluno),
    constraint fk_aluno_disciplina2 foreign key (id_disciplina) references disciplina (id_disciplina)
);


describe curso;
INSERT INTO curso(id_curso, descricao) values (1,'ADS');
INSERT INTO curso(id_curso, descricao) values (2,'Engenharia Computação');
INSERT INTO curso(id_curso, descricao) values (3,'Biologia'), (4,'Sistemas de Informação'), (5,'Pedagogia');


describe aluno;
INSERT INTO aluno(matricula_aluno, cpf, nome, data_nasc) values (4501, 123, 'Maria Júlia', '2002-04-15');
INSERT INTO aluno(matricula_aluno, cpf, nome, data_nasc) values (5788, 456, 'Thiago Ramos', '2006-12-01');
INSERT INTO aluno(matricula_aluno, cpf, nome, data_nasc) values (4571, 789, 'Matheus Henrique', '1998-10-31');
INSERT INTO aluno(matricula_aluno, cpf, nome, data_nasc) values (4456, 321, 'Gabriela Sistini', '1999-12-18');
INSERT INTO aluno(matricula_aluno, cpf, nome, data_nasc) values (7789, 654, 'Jéssica Carvalho', '2001-02-03');
INSERT INTO aluno(matricula_aluno, cpf, nome, data_nasc) values (9782,987,'Ruben Fonseca', '2002-03-23');
INSERT INTO aluno(matricula_aluno, cpf, nome, data_nasc) values (3145,741,'Manuela Gomes', '2003-05-10');
INSERT INTO aluno(matricula_aluno, cpf, nome, data_nasc) values (4457,459,'Rosângela Silva', '2004-06-26'), (7877,457,'Maira Santos','2005-08-13');

describe disciplina;
INSERT INTO disciplina(id_disciplina, nome_disciplina, carga_horario, fk_curso) values (101,'Algoritmos', 60, 1), (102,'Programação Orientada a Objetos', 40,1),(103,'Reconhecimento de Padrões', 80,4),(104,'Estrutura de Dados', 50,4), (105,'Projetos Ágeis',40,2),(106,'Desenvolvimento WEB',60,4);

describe aluno_disciplina;
INSERT INTO aluno_disciplina(matricula_aluno,id_disciplina) values (4501,101),(4501,102),(4501,104),(5788,106),(5788,104),(4571,106),(4571,101),(4571,102);


SELECT * FROM aluno;
SELECT * FROM curso;
SELECT * FROM disciplina;
SELECT * FROM aluno_disciplina;
