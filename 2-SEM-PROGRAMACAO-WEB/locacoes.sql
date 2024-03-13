CREATE TABLE locacoes (
	dataEntrada DATE NOT NULL,
	dataSaida DATE ,
	fabricante VARCHAR(30) NOT NULL,
	modelo VARCHAR (30) NOT NULL,
	placa VARCHAR (8) NOT NULL,
	uf CHAR (2),
	horarioEntrada VARCHAR (5) NOT NULL,
	horarioSaida VARCHAR (5) DEFAULT "",
	valor float (7,2) DEFAULT 0,
	obs TEXT,
	convenio BOOLEAN DEFAULT 0
);
#mostra tabelas existentes no banco de dados

SHOW TABLES; 
DESCRIBE locacoes;