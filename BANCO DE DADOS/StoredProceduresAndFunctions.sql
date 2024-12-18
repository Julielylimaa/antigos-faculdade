DROP DATABASE IF EXISTS funcao;
CREATE DATABASE funcao;

USE funcao;


#CRIANDO STORED PROCEDURE
DELIMITER $$
DROP PROCEDURE IF EXISTS soma $$
CREATE PROCEDURE soma(IN num1 INT, IN num2 INT ) 
BEGIN
  SELECT (num1 + num2) AS Soma;
END $$
DELIMITER ;

#CHAMANDO STORED PROCEDURE
CALL soma(4,5);

#APAGANDO STORED PROCEDURE
DROP PROCEDURE soma;

DELIMITER $$
DROP PROCEDURE IF EXISTS testeif $$
CREATE PROCEDURE testeif(IN num1 INT, IN num2 INT)
BEGIN
 DECLARE soma INT;
 DECLARE resposta VARCHAR(15);
 
 SET soma = num1 + num2;
 
 IF soma > 0 
    THEN SET resposta = 'positivo';
 ELSE
    SET resposta = 'negativo';
 END IF;
 
 SELECT concat('O resultado da soma resulta em um numero: ', resposta) AS Resposta;
 END $$
 DELIMITER ;
 
 CALL testeif(4,-10);
 
 DELIMITER $$
 DROP PROCEDURE IF EXISTS testeWhile $$
 CREATE PROCEDURE testeWhile (IN num INT)
 BEGIN
  DECLARE res int;
  SET res = 1;
  
  WHILE num > 0 DO
    SET res = res * num;
    SET num = num - 1;
  END WHILE;
  
  SELECT res AS FATORIAL;
  END $$
  DELIMITER ;
  
  CALL testeWhile(3);
  
  
  #CRIANDO A FUNCTION
  DELIMITER $$
  DROP FUNCTION IF EXISTS mult $$
  CREATE FUNCTION mult(a FLOAT, b FLOAT) RETURNS FLOAT
  DETERMINISTIC
  BEGIN
   RETURN a*b;
   END $$
  DELIMITER ;
  
  #CHAMANDO A FUNCTION
  SELECT mult(2.5,7.3);
  
  #APAGANDO A FUNCTION
  DROP FUNCTION mult;
  


 