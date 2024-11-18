CREATE SCHEMA IF NOT EXISTS `Aula09_Dois` DEFAULT CHARACTER SET utf8;
USE `Aula09_Dois` ;


CREATE TABLE IF NOT EXISTS `Aula09_Dois`.`Empregado` (
  `idEmpregado` INT NOT NULL AUTO_INCREMENT,
  `Nome` VARCHAR(30) NOT NULL,
  `endereco` VARCHAR(45) NOT NULL,
  `Departamento_idDepartamento` INT NOT NULL,
  PRIMARY KEY (`idEmpregado`));


CREATE TABLE IF NOT EXISTS `Aula09_Dois`.`Dependentes` (
  `idDependentes` INT NOT NULL AUTO_INCREMENT,
  `Nome` VARCHAR(45) NOT NULL,
  `endereco` VARCHAR(45) NOT NULL,
  `Empregado_idEmpregado` INT NOT NULL,
  PRIMARY KEY (`idDependentes`),
  CONSTRAINT `fk_Dependentes_Empregado`
    FOREIGN KEY (`Empregado_idEmpregado`)
    REFERENCES `Aula09_Dois`.`Empregado` (`idEmpregado`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION);
    
INSERT INTO Empregado() values 
(default, 'Pedro', 'Rua dos Limas', 1),
(default, 'João', 'Rua dos Palmares', 2),
(default, 'Márcia', 'Rua das Luzes', 1),
(default, 'Joana', 'Rua Cinco', 3),
(default, 'Caio', 'Rua do Inatel', 2);

INSERT INTO Dependentes() values 
(default, 'Dependente 1', 'Rua dos Limas', 1),
(default, 'Dependente 2', 'Rua dos Palmares', 2),
(default, 'Dependente 3', 'Rua das Luzes', 2),
(default, 'Dependente 4', 'Rua Cinco', 3),
(default, 'Dependente 5', 'Rua do Inatel', 4),
(default, 'Dependente 6', 'Rua das Aguas', 5);
