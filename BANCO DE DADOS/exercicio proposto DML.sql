DROP DATABASE IF EXISTS novobd;

/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
CREATE SCHEMA novobd;

USE novobd;


CREATE TABLE Departamento(
	DNome VARCHAR(15),
	DNumero INT,
	DataInicio DATE,
    SSN_Empregado BIGINT DEFAULT NULL,
	PRIMARY KEY(DNumero),
    CONSTRAINT fk_empregado_depto
    FOREIGN KEY (SSN_Empregado) REFERENCES Empregado (SSN)
    ON DELETE SET NULL ON UPDATE CASCADE
    
);

CREATE TABLE Empregado
(
	PNome VARCHAR(15) NOT NULL,
	MInicial CHAR,
	UNome VARCHAR(15) NOT NULL,
	SSN BIGINT NOT NULL,
	DataNasc DATE,
	Endereco VARCHAR(80),
	Sexo BIT,
	Salario DECIMAL(10,2),
	SSN_Supervisor BIGINT,
	DNumero_Departamento INT,

	PRIMARY KEY (SSN),
    
	CONSTRAINT fk1
    FOREIGN KEY (SSN_Supervisor)
    REFERENCES Empregado(SSN)
	ON DELETE SET NULL ON UPDATE CASCADE,

	CONSTRAINT fk2
	FOREIGN KEY (DNumero_Departamento)
    REFERENCES Departamento (DNumero)
	ON DELETE SET NULL ON UPDATE CASCADE
);

CREATE TABLE projeto(
	PNome VARCHAR(15) NOT NULL,
    PNumero INT NOT NULL,
    PLocalizacao VARCHAR(15),
    DNumero_Departamento INT,
    
    PRIMARY KEY(PNumero),
    
    CONSTRAINT fk_pertence_departamento
    FOREIGN KEY (DNumero_Departamento)
    REFERENCES Departamento(DNumero)
    ON DELETE SET NULL ON UPDATE CASCADE
);

CREATE TABLE dependente(
	Nome_dependente VARCHAR(15) NOT NULL,
    Sexo BIT,
    DataNasc DATE,
    Parentesco VARCHAR(15) NOT NULL,
    SSN_Empregado BIGINT,
    
    PRIMARY KEY  (Nome_dependente, SSN_Empregado),
    
    CONSTRAINT fk_depende_empregado
    FOREIGN KEY (SSN_Empregado) REFERENCES Empregado(SSN)
    ON DELETE CASCADE ON UPDATE CASCADE
);

CREATE TABLE depto_localizacoes(
	LNumero INT NOT NULL,
    DLocalizacao VARCHAR(45),
    DNumero_Departamento INT,
    
    PRIMARY KEY (LNumero),
    
    CONSTRAINT fk_depto
    FOREIGN KEY (DNumero_Departamento) REFERENCES Departamento(DNumero)
    ON DELETE CASCADE ON UPDATE CASCADE
);


CREATE TABLE trabalha_em(
	SSN_Empregado BIGINT,
    PNumero_projeto INT,
    Horas TIME,
    
    PRIMARY KEY(SSN_Empregado, PNumero_projeto),
    
    CONSTRAINT fk_trabalha_em_empregado
    FOREIGN KEY (SSN_Empregado) REFERENCES Empregado(SSN)
    ON DELETE CASCADE ON UPDATE CASCADE,
    
    CONSTRAINT fk_trabalha_em_projeto
    FOREIGN KEY (PNumero_projeto) REFERENCES projeto(PNumero)
    ON DELETE CASCADE ON UPDATE CASCADE 
    
);

/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;

#1
INSERT INTO Departamento (DNome, DNumero, DataInicio) VALUES ('Marketing', 7, '2023-05-10');
INSERT INTO Departamento (DNome, DNumero, DataInicio) VALUES ('RH', 3, '2023-01-15');
#2
INSERT INTO Departamento (DNome, DNumero) VALUES ('Administração', 1);

#3
INSERT INTO Empregado (PNome, UNome, SSN, DataNasc, Salario)
VALUES ('Carlos', 'Ferreira', 555555555, '1988-12-20', 7000.00);
INSERT INTO Empregado (PNome, MInicial, UNome, SSN, Salario)
VALUES ('Ana', 'M', 'Pereira', 777777777, 2500.00);
INSERT INTO Empregado
VALUES('João', 'S', 'Silva', 123456789, '1990-05-10', 'Rua A, 123', 1, 5000.00, 555555555, 1);
INSERT INTO Empregado 
VALUES('Maria', 'R', 'Santos', 987654321, '1995-08-15', 'Avenida B, 456', 0, 4000.00, 555555555, 3); 

#4 
INSERT INTO projeto (PNome, PNumero) VALUES ('projeto 1', 1);
INSERT INTO projeto (PNome, PNumero) VALUES ('projeto 2', 2);
INSERT INTO projeto (PNome, PNumero) VALUES ('projeto 3', 3);

#5
UPDATE Empregado
SET SSN_Supervisor =  555555555
WHERE SSN = 777777777;

UPDATE Empregado
SET SSN_Supervisor =  123456789
WHERE SSN = 987654321;

UPDATE Empregado
SET SSN_Supervisor =  null
WHERE SSN = 123456789;

#6
UPDATE Departamento
SET SSN_Empregado = 123456789
WHERE DNumero = 1;

UPDATE Departamento
SET SSN_Empregado = 555555555
WHERE DNumero = 3;

UPDATE Departamento
SET SSN_Empregado = 987654321
WHERE DNumero = 7;

#7
UPDATE projeto
SET PLocalizacao = 'rua 1', DNumero_Departamento = 1
WHERE PNumero = 1;

UPDATE projeto
SET PLocalizacao = 'rua 2', DNumero_Departamento = 3
WHERE PNumero = 2;

UPDATE projeto
SET PLocalizacao = 'rua 3', DNumero_Departamento = 7
WHERE PNumero = 3;

#7
DELETE FROM projeto WHERE DNumero_Departamento = 7;



