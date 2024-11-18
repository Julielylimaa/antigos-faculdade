CREATE SCHEMA novobd;

USE novobd;

CREATE TABLE Departamento(
	DNome VARCHAR(15),
	DNumero INT,
	DataInicio DATE,
	PRIMARY KEY(DNumero)
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
    REFERENCES empregado (SSN)
	ON DELETE CASCADE ON UPDATE CASCADE,

	CONSTRAINT fk2
	FOREIGN KEY (DNumero_Departamento)
    REFERENCES departamento (DNumero)
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
    REFERENCES departamento(DNumero)
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