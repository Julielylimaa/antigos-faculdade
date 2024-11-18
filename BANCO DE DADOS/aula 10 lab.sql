DROP DATABASE IF EXISTS funcao;
CREATE DATABASE funcao;
USE funcao;

#criar PROCEDURE - função sem retorno
DELIMITER $$
DROP PROCEDURE IF EXISTS soma $$
CREATE PROCEDURE soma(IN num1 INT, IN num2 INT)
BEGIN
	SELECT (num1+num2) AS soma;
END $$
DELIMITER ;

#chamar 
CALL soma(4,5);

#criando com if
DELIMITER $$
DROP PROCEDURE IF EXISTS testeif $$
CREATE PROCEDURE testeif(IN num1 INT, IN num2 INT)
BEGIN
	DECLARE soma INT;
    DECLARE resposta VARCHAR(15);
    
    SET soma = num1 + num2;
    
    IF soma > 0
		THEN SET resposta = "positivo";
	ELSE 
		SET resposta = "negativo";
	END IF;
    
    SELECT concat("O resultado da soma resulta em um numero ", resposta) AS resposta;
END $$
DELIMITER ;

CALL testeif(-10,7);

#criando com while
DELIMITER $$
DROP PROCEDURE IF EXISTS testewhile $$
CREATE PROCEDURE testewhile(IN num INT)
BEGIN
	DECLARE res INT;
	SET res = 1;
    
    WHILE num > 0 DO
		SET res = res*num;
        SET num = num-1;
	END WHILE;
    
    SELECT res AS Fatorial;
END $$
DELIMITER ;

CALL testewhile(5);

#criando FUNCTION - funcao com retorno
DELIMITER $$
DROP FUNCTION IF EXISTS mult $$
CREATE FUNCTION mult(a FLOAT, b FLOAT) RETURNS FLOAT
DETERMINISTIC 
BEGIN
	RETURN a*b;
	
END $$
DELIMITER ;

#chamando function
SELECT mult(2.5, 3.7) AS Multiplicacao;


