-- MySQL Script generated by MySQL Workbench
-- Mon Apr  3 10:38:20 2023
-- Model: New Model    Version: 1.0
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
-- Table `mydb`.`estrela`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `mydb`.`estrela` (
  `idestrela` INT NOT NULL,
  `nome` VARCHAR(45) NOT NULL,
  `massa_kg` DOUBLE NOT NULL,
  `tamanho_km` DOUBLE NOT NULL,
  `luminosidade` DOUBLE NOT NULL,
  `nome_galaxia` VARCHAR(45) NOT NULL,
  PRIMARY KEY (`idestrela`),
  UNIQUE INDEX `idestrela_UNIQUE` (`idestrela` ASC) VISIBLE)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`planeta`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `mydb`.`planeta` (
  `idplaneta` INT NOT NULL,
  `nome` VARCHAR(45) NOT NULL,
  `massa_kg` DOUBLE NOT NULL,
  `tamanho_km` DOUBLE NOT NULL,
  `habitavel` VARCHAR(2) NOT NULL,
  `estrela_idestrela` INT NOT NULL,
  PRIMARY KEY (`idplaneta`),
  UNIQUE INDEX `idplaneta_UNIQUE` (`idplaneta` ASC) VISIBLE,
  INDEX `fk_planeta_estrela_idx` (`estrela_idestrela` ASC) VISIBLE,
  CONSTRAINT `fk_planeta_estrela`
    FOREIGN KEY (`estrela_idestrela`)
    REFERENCES `mydb`.`estrela` (`idestrela`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`nave`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `mydb`.`nave` (
  `idnave` INT NOT NULL,
  `nome` VARCHAR(45) NOT NULL,
  `tripulantes` INT NOT NULL,
  `passageiros` INT NOT NULL,
  PRIMARY KEY (`idnave`),
  UNIQUE INDEX `idnave_UNIQUE` (`idnave` ASC) VISIBLE)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`mapa`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `mydb`.`mapa` (
  `idmapa` INT NOT NULL,
  `titulo` VARCHAR(45) NOT NULL,
  `escala` DOUBLE NOT NULL,
  `orientacao` VARCHAR(45) NOT NULL,
  `quantidade_obstaculos` INT NULL,
  UNIQUE INDEX `idmapa_UNIQUE` (`idmapa` ASC) VISIBLE,
  PRIMARY KEY (`idmapa`))
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`viagem`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `mydb`.`viagem` (
  `planeta_idplaneta` INT NOT NULL,
  `nave_idnave` INT NOT NULL,
  `tempo_duracao` VARCHAR(45) NOT NULL,
  `distancia_km` DOUBLE NOT NULL,
  `mapa_idmapa` INT NOT NULL,
  PRIMARY KEY (`planeta_idplaneta`, `nave_idnave`),
  INDEX `fk_planeta_has_nave_nave1_idx` (`nave_idnave` ASC) VISIBLE,
  INDEX `fk_planeta_has_nave_planeta1_idx` (`planeta_idplaneta` ASC) VISIBLE,
  INDEX `fk_viagem_mapa1_idx` (`mapa_idmapa` ASC) VISIBLE,
  CONSTRAINT `fk_planeta_has_nave_planeta1`
    FOREIGN KEY (`planeta_idplaneta`)
    REFERENCES `mydb`.`planeta` (`idplaneta`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_planeta_has_nave_nave1`
    FOREIGN KEY (`nave_idnave`)
    REFERENCES `mydb`.`nave` (`idnave`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_viagem_mapa1`
    FOREIGN KEY (`mapa_idmapa`)
    REFERENCES `mydb`.`mapa` (`idmapa`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`passageiro`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `mydb`.`passageiro` (
  `idpassageiro` INT NOT NULL,
  `nome` VARCHAR(45) NOT NULL,
  `idade` INT NOT NULL,
  `sexo` VARCHAR(2) NOT NULL,
  `profissao` VARCHAR(45) NULL,
  `nave_idnave` INT NOT NULL,
  PRIMARY KEY (`idpassageiro`),
  UNIQUE INDEX `idpassageiro_UNIQUE` (`idpassageiro` ASC) VISIBLE,
  INDEX `fk_passageiro_nave1_idx` (`nave_idnave` ASC) VISIBLE,
  CONSTRAINT `fk_passageiro_nave1`
    FOREIGN KEY (`nave_idnave`)
    REFERENCES `mydb`.`nave` (`idnave`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`tripulante`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `mydb`.`tripulante` (
  `idtripulante` INT NOT NULL,
  `nome` VARCHAR(45) NOT NULL,
  `idade` INT NOT NULL,
  `sexo` VARCHAR(2) NOT NULL,
  `especializacao` VARCHAR(45) NOT NULL,
  `supervisor` VARCHAR(45) NOT NULL,
  `nave_idnave` INT NOT NULL,
  PRIMARY KEY (`idtripulante`),
  UNIQUE INDEX `idtripulante_UNIQUE` (`idtripulante` ASC) VISIBLE,
  INDEX `fk_tripulante_nave1_idx` (`nave_idnave` ASC) VISIBLE,
  CONSTRAINT `fk_tripulante_nave1`
    FOREIGN KEY (`nave_idnave`)
    REFERENCES `mydb`.`nave` (`idnave`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


SET SQL_MODE=@OLD_SQL_MODE;
SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS;
SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS;
