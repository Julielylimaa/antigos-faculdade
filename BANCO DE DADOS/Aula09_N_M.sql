CREATE SCHEMA IF NOT EXISTS `Aula09_Tres` DEFAULT CHARACTER SET utf8 ;
USE `Aula09_Tres` ;


CREATE TABLE IF NOT EXISTS `Aula09_Tres`.`Empregado` (
  `idEmpregado` INT NOT NULL AUTO_INCREMENT,
  `Nome` VARCHAR(30) NOT NULL,
  `endereco` VARCHAR(45) NOT NULL,
  `Departamento_idDepartamento` INT NOT NULL,
  PRIMARY KEY (`idEmpregado`));


CREATE TABLE IF NOT EXISTS `Aula09_Tres`.`Projeto` (
  `idProjeto` INT NOT NULL AUTO_INCREMENT,
  `Nome` VARCHAR(45) NOT NULL,
  `setor` VARCHAR(45) NOT NULL,
  PRIMARY KEY (`idProjeto`));


CREATE TABLE IF NOT EXISTS `Aula09_Tres`.`Empregado_has_Projeto` (
  `Empregado_idEmpregado` INT NOT NULL,
  `Projeto_idProjeto` INT NOT NULL,
  `Data_Conclusao` DATE NULL,
  PRIMARY KEY (`Empregado_idEmpregado`, `Projeto_idProjeto`),
  CONSTRAINT `fk_Empregado_has_Projeto_Empregado`
    FOREIGN KEY (`Empregado_idEmpregado`)
    REFERENCES `Aula09_Tres`.`Empregado` (`idEmpregado`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_Empregado_has_Projeto_Projeto1`
    FOREIGN KEY (`Projeto_idProjeto`)
    REFERENCES `Aula09_Tres`.`Projeto` (`idProjeto`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION);
    

INSERT INTO Empregado() values 
(default, 'Pedro', 'Rua dos Limas', 1),
(default, 'João', 'Rua dos Palmares', 2),
(default, 'Márcia', 'Rua das Luzes', 1),
(default, 'Joana', 'Rua Cinco', 3),
(default, 'Caio', 'Rua do Inatel', 2);


INSERT INTO Projeto() values 
(default, 'Projeto 1', 1),
(default, 'Projeto 2', 1),
(default, 'Projeto 3', 2),
(default, 'Projeto 4', 2),
(default, 'Projeto 5', 2);

INSERT INTO Empregado_has_Projeto() values 
(1,2,"10-01-22"),
(2,1,"22-12-19"),
(3,1,"22-12-18"),
(4,1,"12-06-22"),
(5,2,"22-12-22");

