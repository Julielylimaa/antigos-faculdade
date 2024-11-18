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


SET SQL_MODE=@OLD_SQL_MODE;
SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS;
SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS;
