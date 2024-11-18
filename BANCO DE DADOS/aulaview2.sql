DROP DATABASE IF EXISTS loja;
CREATE DATABASE loja;
USE loja;



CREATE TABLE compra(
	id int not null auto_increment primary key,
    preco float,
    pagamento float
);

INSERT INTO compra VALUES (id, 9.5, 18.25);
INSERT INTO compra VALUES (id, 18.99, 25);
INSERT INTO compra VALUES (id, 3.99, 5);
INSERT INTO compra VALUES (id, 9.5, 10);
INSERT INTO compra VALUES (id, 19.49, 20);
INSERT INTO compra VALUES (id, 42.10, 50);

CREATE VIEW qtd_produtos AS
SELECT COUNT(*) 'Quantidade'
FROM compra
WHERE preco >= 10;


SELECT * FROM qtd_produtos;