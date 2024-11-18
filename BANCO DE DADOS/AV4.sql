DROP DATABASE IF EXISTS av4;
CREATE DATABASE av4;
USE av4;

CREATE TABLE IF NOT EXISTS Cliente(
	id INT NOT NULL,
    nome VARCHAR(50) NOT NULL,
    saldo FLOAT NOT NULL,
    cidade VARCHAR(50) NOT NULL,
    PRIMARY KEY(id)
);

CREATE TABLE IF NOT EXISTS Compra(
	id INT NOT NULL AUTO_INCREMENT,
    nomeProduto VARCHAR(50) NOT NULL,
    precoKG FLOAT NOT NULL,
    peso FLOAT NOT NULL,
    precoTotal FLOAT,
    idCliente INT,
    PRIMARY KEY(id),
    CONSTRAINT fk1
		FOREIGN KEY(idCliente)
        REFERENCES Cliente(id)
        ON UPDATE CASCADE
        ON DELETE CASCADE
);

SET @pesoTotal = 0;

INSERT INTO Cliente(id, nome, saldo, cidade) VALUES
('1', 'João', 1700, 'São Paulo'),
('2', 'Maria', 3500, 'São Paulo'),
('3', 'Marcos', 2600, 'Barbacena');

#questao 1
DELIMITER $$
DROP PROCEDURE IF EXISTS insere_e_calcula_peso $$
CREATE PROCEDURE insere_e_calcula_peso(IN nomeProduto VARCHAR(50), IN precoKG FLOAT, IN peso FLOAT, IN idCliente INT)
BEGIN
 DECLARE precoTotal FLOAT;
 IF peso > 5
	THEN SET precoTotal = peso *precoKG;
 ELSE
	SET precoTotal = NULL;
 END IF;
 
 INSERT INTO Compra VALUES (id, nomeProduto, precoKG, peso, precoTotal, idCliente);
 END $$
 DELIMITER ;
 
 CALL insere_e_calcula_peso('produto 1', 260.30 , 3.45, 2); 
 CALL insere_e_calcula_peso('produto 2', 10.19 , 25, 1); 
 CALL insere_e_calcula_peso('produto 3', 150.30 , 20, 2); 
 CALL insere_e_calcula_peso('produto 1', 260.30 , 7, 3); 
 SELECT * FROM Compra;
 
 #Questao 2
 DELIMITER $$
  DROP FUNCTION IF EXISTS  preco_total_com_desconto $$
  CREATE FUNCTION  preco_total_com_desconto(precoKG FLOAT, peso FLOAT) RETURNS FLOAT
  DETERMINISTIC
  BEGIN
	DECLARE precoTotal FLOAT;
    SET precoTotal = precoKG * peso * 0.9;
    RETURN precoTotal;
   END $$
  DELIMITER ;
  
  SELECT preco_total_com_desconto(8.2, 2.2) AS 'Preço com 10% de desconto';
  

#Questao 4
CREATE VIEW Cliente_e_Compras AS (
	SELECT c.nomeProduto 'Produto', c.precoKG 'Preço kg', c.peso 'Peso', c.precoTotal 'Preço Total', 
    cl.nome 'Nome Cliente', cl.cidade 'Cidade', cl.saldo 'Saldo'
    FROM Compra c, Cliente cl
    WHERE c.idCliente = cl.id AND cl.cidade like 'São Paulo' AND precoTotal >500
);

SELECT * FROM  Cliente_e_Compras;