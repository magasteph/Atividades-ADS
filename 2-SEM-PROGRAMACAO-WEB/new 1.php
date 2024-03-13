# Criar o banco campeonato (do zero)
CREATE DATABASE campeonato;

# Abrir / selecionar o banco de dados
USE CAMPEONATO

#Criar a tabela de times
CREATE TABLE times (
	id INT AUTO_INCREMENT PRIMARY KEY
	nome VARCHAR(30) NOT NULL 