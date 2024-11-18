DROP DATABASE IF EXISTS aula_9;
CREATE DATABASE aula_9;

USE aula_9;

CREATE TABLE Agente(
	idAgente int auto_increment, 
    nome VARCHAR(45),
    endereco VARCHAR(45) not null,
    nascimento date,
    habilidade VARCHAR(45),
    sexo VARCHAR(45),
    email VARCHAR(45),
    primary key(idAgente)
);

CREATE TABLE vilao(
	idvilao int auto_increment primary key,
    nome VARCHAR(45) NOT NULL,
    num_crimes INT not null
);

CREATE TABLE missao(
	idmissao int auto_increment primary key, 
    dataM DATE not null,
    nome VARCHAR(45) not null,
    localM VARCHAR(45),
    duracao INT,
    vilao_idvilao INT,
    
    constraint fk1 FOREIGN KEY (vilao_idvilao)
    REFERENCES vilao(idvilao)
    ON DELETE SET NULL ON UPDATE CASCADE 
    
);



CREATE TABLE Agente_has_missao(
	Agente_idAgente INT,
    missao_idmissao INT,
    
    primary key (Agente_idAgente, missao_idmissao),
    
    CONSTRAINT fk2 FOREIGN KEY (Agente_idAgente) 
    REFERENCES Agente(idAgente)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
    
    CONSTRAINT fk3 FOREIGN KEY (missao_idmissao) 
    REFERENCES missao(idmissao)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION
);

INSERT INTO Agente (nome,endereco, nascimento, habilidade, sexo, email)
VALUES ("Lucas Silva", "Rua das Flores, 123", 19900531, "Habilidade 1", "Masculino", "lucas.silva@gmail.com"); 
INSERT INTO Agente (nome,endereco, nascimento, habilidade, sexo, email)
VALUES ("Carlos Rodrigues", "Avenida dos Coqueiros, 987", 19980703, "Habilidade 5", "Masculino", "carlos.rodrigues@gmail.com");
INSERT INTO Agente (nome,endereco, nascimento, habilidade, sexo, email)
VALUES ("Amanda Santos", "Avenida das Árvores, 456", 19880915, "Habilidade 2", "Feminino", "amanda.santos@gmail.com"); 
INSERT INTO Agente (nome,endereco, nascimento, habilidade, sexo, email)
VALUES ("Rafael Oliveira", "Rua dos Pinheiros, 789", 19950207, "Habilidade 3", "Masculino", "rafael.oliveira@gmail.com") ;
INSERT INTO Agente (nome,endereco, nascimento, habilidade, sexo, email)
VALUES ("Juliana Souza", "Rua das Pedras, 321", 19921125, "Habilidade 4", "Feminino", "juliana.souza@gmail.com");


INSERT INTO vilao (nome, num_crimes)
VALUES ("vilao 1", 5);
INSERT INTO vilao (nome, num_crimes)
VALUES ("vilao 2", 10);
INSERT INTO vilao (nome, num_crimes)
VALUES ("vilao 3", 4);
INSERT INTO vilao (nome, num_crimes)
VALUES ("vilao 4", 9);
INSERT INTO vilao (nome, num_crimes)
VALUES ("vilao 5", 21);

INSERT INTO missao (dataM,nome, localM ,duracao, vilao_idvilao)
VALUES (20230501,"missao 1", "local 1", 30, 2); 
INSERT INTO missao (dataM,nome, localM,duracao, vilao_idvilao)
VALUES (20230502,"missao 2", "local 2", 25, 1 ); 
INSERT INTO missao (dataM,nome, localM,duracao, vilao_idvilao)
VALUES (20230504,"missao 3", "local 3", 15, 4); 
INSERT INTO missao (dataM,nome, localM,duracao,vilao_idvilao)
VALUES (20230521,"missao 4", "local 4", 120, 5); 
INSERT INTO missao (dataM,nome, localM,duracao, vilao_idvilao)
VALUES (20230516,"missao 5", "local 5", 60, 3); 

INSERT INTO Agente_has_missao (Agente_idAgente, missao_idmissao)
VALUES (2,3); 
INSERT INTO Agente_has_missao (Agente_idAgente, missao_idmissao)
VALUES (5,2); 
INSERT INTO Agente_has_missao (Agente_idAgente, missao_idmissao)
VALUES (3,5); 
INSERT INTO Agente_has_missao (Agente_idAgente, missao_idmissao)
VALUES (1,4); 
INSERT INTO Agente_has_missao (Agente_idAgente, missao_idmissao)
VALUES (4,1); 

#busca nome, email, data e nome agente e missao
SELECT A.nome , A.email , m.dataM , m.nome FROM Agente AS A JOIN Agente_has_missao AS AM 
ON A.idAgente = AM.Agente_idAgente JOIN missao AS m ON m.idmissao = AM.missao_idmissao;

#busca nome, data, duracao e nome missao e vilao
SELECT m.nome, m.dataM, m.duracao, v.nome FROM missao AS m JOIN vilao AS v 
ON v.idvilao = m.vilao_idvilao;

#busca nome agente, missao e vilao
SELECT A.nome, m.nome, v.nome FROM Agente AS A JOIN Agente_has_missao AS AM 
ON A.idAgente = AM.Agente_idAgente JOIN missao AS m ON m.idmissao = AM.missao_idmissao 
JOIN vilao AS v ON v.idvilao = m.vilao_idvilao;

