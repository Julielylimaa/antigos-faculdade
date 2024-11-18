CREATE SCHEMA IF NOT EXISTS Aula09_Um DEFAULT CHARACTER SET utf8 ;
USE Aula09_Um ;


CREATE TABLE IF NOT EXISTS Departamento (
  idDepartamento INT NOT NULL AUTO_INCREMENT,
  Nome VARCHAR(45) NOT NULL,
  qtd_projeto VARCHAR(45) NOT NULL,
  PRIMARY KEY (idDepartamento));


CREATE TABLE IF NOT EXISTS Empregado (
  idEmpregado INT NOT NULL AUTO_INCREMENT,
  Nome VARCHAR(30) NOT NULL,
  endereco VARCHAR(45) NOT NULL,
  Departamento_idDepartamento INT NOT NULL,
  PRIMARY KEY (idEmpregado),
  
  CONSTRAINT fk_Empregado_Departamento
    FOREIGN KEY (Departamento_idDepartamento)
    REFERENCES Departamento (idDepartamento)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION);
    
INSERT INTO Departamento() values 
(default, 'Departamento 1', 3),
(default, 'Departamento 2', 5),
(default, 'Departamento 3', 1);

    
INSERT INTO Empregado() values 
(default, 'Pedro', 'Rua dos Limas', 1),
(default, 'João', 'Rua dos Palmares', 2),
(default, 'Márcia', 'Rua das Luzes', 1),
(default, 'Joana', 'Rua Cinco', 3),
(default, 'Caio', 'Rua do Inatel', 2);






