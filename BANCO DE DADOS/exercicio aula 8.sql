DROP DATABASE IF EXISTS banco;

CREATE DATABASE banco;
USE banco;


CREATE TABLE cliente (
	id_cliente INT NOT NULL auto_increment PRIMARY KEY,
    nome VARCHAR(45),
    cpf VARCHAR(45),
    endereco VARCHAR(45)
);


INSERT INTO cliente (nome, cpf, endereco) VALUES ('cliente 1', '00000000000', 'rua 1');
INSERT INTO cliente (nome, cpf, endereco) VALUES ('cliente 2', '11111111111', 'rua 2');

ALTER TABLE cliente ADD ano_nascimento INT;

UPDATE cliente SET ano_nascimento = '2000' WHERE id_cliente = 1;
UPDATE cliente SET ano_nascimento = '2001' WHERE id_cliente = 2;

DELETE FROM cliente WHERE id_cliente = 1;

SELECT * FROM cliente;