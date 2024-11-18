DROP DATABASE IF EXISTS aula_procedure;
CREATE DATABASE aula_procedure;
USE aula_procedure;

CREATE TABLE aluno(
	id int not null auto_increment primary key,
    nome varchar(50),
    idade int,
    curso varchar(3),
    email varchar(100)

);

DELIMITER $$
DROP FUNCTION IF EXISTS criarEmail $$
CREATE FUNCTION criarEmail(nome VARCHAR(50), curso VARCHAR(3)) RETURNS VARCHAR(100)
DETERMINISTIC 
BEGIN
	DECLARE email VARCHAR(100);
    SET email = concat(nome, '@', curso, '.inatel.br');
    RETURN email;
END $$
DELIMITER ;


DELIMITER $$
DROP PROCEDURE IF EXISTS inserirDados $$
CREATE PROCEDURE inserirDados(IN nome VARCHAR(50), IN idade INT, IN curso VARCHAR(3))
BEGIN
	DECLARE email VARCHAR(100);
    SET email = criarEmail(nome, curso);
    
    INSERT INTO aluno(nome, idade, curso, email) VALUES (nome, idade, curso, email);
END $$
DELIMITER ;

CALL inserirDados('joao', 21, 'gec') ;
CALL inserirDados('juliely', 22, 'ges') ;
SELECT * FROM aluno;