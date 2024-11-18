-- MySQL Workbench Forward Engineering

SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0;
SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0;
SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_ENGINE_SUBSTITUTION';

-- -----------------------------------------------------
-- Schema mydb
-- -----------------------------------------------------

-- -----------------------------------------------------
-- Schema mydb
-- -----------------------------------------------------
CREATE SCHEMA IF NOT EXISTS `mydb` DEFAULT CHARACTER SET utf8 ;
USE `mydb` ;

-- -----------------------------------------------------
-- Table `mydb`.`escola`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `mydb`.`escola` (
  `idescola` INT NOT NULL,
  `escolacol` VARCHAR(45) NOT NULL,
  `escolacol1` VARCHAR(45) NULL,
  PRIMARY KEY (`idescola`),
  UNIQUE INDEX `escolacol1_UNIQUE` (`escolacol1` ASC) VISIBLE)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`diretor`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `mydb`.`diretor` (
  `idtable1` INT NOT NULL,
  `table1col` VARCHAR(45) NOT NULL,
  `escola_idescola` INT NOT NULL,
  PRIMARY KEY (`idtable1`),
  INDEX `fk_diretor_escola_idx` (`escola_idescola` ASC) VISIBLE,
  CONSTRAINT `fk_diretor_escola`
    FOREIGN KEY (`escola_idescola`)
    REFERENCES `mydb`.`escola` (`idescola`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`Escritor`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `mydb`.`Escritor` (
  `idEscritor` INT NOT NULL,
  `Escritorcol` VARCHAR(45) NOT NULL,
  PRIMARY KEY (`idEscritor`))
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`livro`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `mydb`.`livro` (
  `idlivro` INT NOT NULL,
  `livrocol` VARCHAR(45) NOT NULL,
  `livrocol1` VARCHAR(45) NULL,
  `Escritor_idEscritor` INT NOT NULL,
  PRIMARY KEY (`idlivro`),
  UNIQUE INDEX `livrocol1_UNIQUE` (`livrocol1` ASC) VISIBLE,
  INDEX `fk_livro_Escritor1_idx` (`Escritor_idEscritor` ASC) VISIBLE,
  CONSTRAINT `fk_livro_Escritor1`
    FOREIGN KEY (`Escritor_idEscritor`)
    REFERENCES `mydb`.`Escritor` (`idEscritor`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`Artigos`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `mydb`.`Artigos` (
  `idArtigos` INT NOT NULL AUTO_INCREMENT,
  `titulo` VARCHAR(45) NOT NULL,
  `data` INT NOT NULL,
  PRIMARY KEY (`idArtigos`))
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`Instituicao`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `mydb`.`Instituicao` (
  `idInstituição` INT NOT NULL AUTO_INCREMENT,
  `nome` VARCHAR(45) NOT NULL,
  `endereco` VARCHAR(45) NOT NULL,
  PRIMARY KEY (`idInstituição`))
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`Autor`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `mydb`.`Autor` (
  `idAutor` INT NOT NULL AUTO_INCREMENT,
  `nome` VARCHAR(45) NOT NULL,
  `email` VARCHAR(45) NOT NULL,
  `telefone` VARCHAR(45) NOT NULL,
  `Artigos_idArtigos` INT NOT NULL,
  `Instituicao_idInstituição` INT NOT NULL,
  PRIMARY KEY (`idAutor`),
  INDEX `fk_Autor_Artigos1_idx` (`Artigos_idArtigos` ASC) VISIBLE,
  INDEX `fk_Autor_Instituicao1_idx` (`Instituicao_idInstituição` ASC) VISIBLE,
  CONSTRAINT `fk_Autor_Artigos1`
    FOREIGN KEY (`Artigos_idArtigos`)
    REFERENCES `mydb`.`Artigos` (`idArtigos`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_Autor_Instituicao1`
    FOREIGN KEY (`Instituicao_idInstituição`)
    REFERENCES `mydb`.`Instituicao` (`idInstituição`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`transferencia`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `mydb`.`transferencia` (
  `idtransferencia` INT NOT NULL,
  `data` VARCHAR(45) NOT NULL,
  PRIMARY KEY (`idtransferencia`))
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`participante`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `mydb`.`participante` (
  `idparticipante` INT NOT NULL AUTO_INCREMENT,
  `nome` VARCHAR(45) NOT NULL,
  `endereco` VARCHAR(45) NOT NULL,
  `telefone` VARCHAR(45) NOT NULL,
  `email` VARCHAR(45) NOT NULL,
  `transferencia_idtransferencia` INT NOT NULL,
  PRIMARY KEY (`idparticipante`),
  INDEX `fk_participante_transferencia1_idx` (`transferencia_idtransferencia` ASC) VISIBLE,
  CONSTRAINT `fk_participante_transferencia1`
    FOREIGN KEY (`transferencia_idtransferencia`)
    REFERENCES `mydb`.`transferencia` (`idtransferencia`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`participante_has_Artigos`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `mydb`.`participante_has_Artigos` (
  `participante_idparticipante` INT NOT NULL,
  `Artigos_idArtigos` INT NOT NULL,
  PRIMARY KEY (`participante_idparticipante`, `Artigos_idArtigos`),
  INDEX `fk_participante_has_Artigos_Artigos1_idx` (`Artigos_idArtigos` ASC) VISIBLE,
  INDEX `fk_participante_has_Artigos_participante1_idx` (`participante_idparticipante` ASC) VISIBLE,
  CONSTRAINT `fk_participante_has_Artigos_participante1`
    FOREIGN KEY (`participante_idparticipante`)
    REFERENCES `mydb`.`participante` (`idparticipante`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_participante_has_Artigos_Artigos1`
    FOREIGN KEY (`Artigos_idArtigos`)
    REFERENCES `mydb`.`Artigos` (`idArtigos`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


SET SQL_MODE=@OLD_SQL_MODE;
SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS;
SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS;
