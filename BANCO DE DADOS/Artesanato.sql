DROP DATABASE IF EXISTS artesanato;
CREATE DATABASE artesanato;
USE artesanato;

CREATE TABLE IF NOT EXISTS Cliente(
cpf VARCHAR(14) NOT NULL PRIMARY KEY,
nome VARCHAR(45) NOT NULL,
telefone VARCHAR(45) NOT NULL
);

CREATE TABLE IF NOT EXISTS Produto(
codigo INT NOT NULL PRIMARY KEY,
nome VARCHAR(45) NOT NULL,
tipo_madeira VARCHAR(45) NOT NULL,
preco INT NOT NULL,
qtd_estoque INT NOT NULL
);

CREATE TABLE IF NOT EXISTS Compra(
Cliente_cpf VARCHAR(14) NOT NULL,
Produto_codigo INT NOT NULL,
data_compra DATE NOT NULL,
qtd_comprada INT NOT NULL,
taxa_entrega FLOAT NOT NULL,
PRIMARY KEY (Cliente_cpf, Produto_codigo),
CONSTRAINT Cliente_cpf_fk
FOREIGN KEY (Cliente_cpf) REFERENCES Cliente(cpf) ON DELETE NO ACTION
ON UPDATE CASCADE,
CONSTRAINT Produto_codigo_fk
FOREIGN KEY (Produto_codigo) REFERENCES Produto(codigo) ON DELETE NO ACTION
ON UPDATE CASCADE
);

#1- a
ALTER TABLE Cliente ADD cep VARCHAR(9);

#1- b
ALTER TABLE Produto MODIFY preco FLOAT NOT NULL;

#1-c 
ALTER TABLE Compra DROP taxa_entrega;

#2
INSERT INTO Cliente (cpf, nome, telefone) VALUES ('492.441.760-25','Luciano','(35)99875-5572'),
('456.841.862-03','Flavio','(35)3473-8562'),
('192.041.526-14','Paola','(35)3471-1519'),
('556.851.862-88','Aline','(11)99822-9639');


INSERT INTO Produto VALUES 
(0300,'Baleia Azul','Carvalho',29.90,3),
(0301,'Moinho de Vento','Ipê',24.90,2),
(0400,'Conjunto de Banquinhos','Carvalho',42,4),
(0500,'Porta-chaves','Goiabão',8.90,7),
(0501,'Mini Avião','Mogno',27.90,4),
(0502,'Tronco Esculpido','Goiabão',69.90,2),
(0503,'Vaso de Flores','Aroeira',9.90,4),
(0504,'Urso Pardo','Aroeira',28.90,2),
(0505,'Peixe Dourado','Ipê',37.90,2),
(0800,'Galinha Pintada','Carvalho',11.90,4),
(0801,'Flauta','Mogno',18.90,2),
(0802,'Guitarra', 'Alder', 1000, 5),
(0900,'Tábua de Corte','Carvalho',8.90,4);

#3
INSERT INTO Compra (Cliente_cpf, Produto_codigo, data_compra, qtd_comprada) VALUES
('492.441.760-25', '0301', '2018-08-20', '1'),
('556.851.862-88', '0503', '2020-11-12', '2'),
('456.841.862-03', '0802', '2020-10-30', '1'); 



#4
CREATE USER 'Rodrigo' IDENTIFIED BY '1234';
GRANT ALL PRIVILEGES ON * TO 'Rodrigo';


CREATE USER 'Secretaria' IDENTIFIED BY '5678';
GRANT SELECT, UPDATE, DELETE, INSERT, ALTER ON artesanato.* TO 'Secretaria';
REVOKE ALTER ON artesanato.* FROM 'Secretaria';
DROP USER 'Secretaria';
