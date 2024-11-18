drop database if exists aula3;
create database aula3;
use aula3;

#COMANDO PARA DESATIVAR O SAFE MODE
SET SQL_SAFE_UPDATES = 0;

#QUESTAO 1
#A chave primaria serve para identificar exclusivamente cada registro em uma tabela e facilitar a vinculaçao
#de informações em tabelas diferentes


#QUESTAO 2
create table if not exists pessoa(
	id int not null auto_increment primary key,
    nome varchar(45),
    endereco varchar(45),
    cargo varchar(45)
);

#RESPOSNDA A QUESTÂO 2 AQUI
#a
INSERT INTO pessoa (nome, endereco, cargo) VALUES ('Ana Silva', 'Rua das Flores, 123','Gerente de Projetos');
INSERT INTO pessoa (nome, endereco, cargo) VALUES ('Pedro Souza', 'Avenida dos Anjos, 456', 'Analista de Marketing');
INSERT INTO pessoa (nome, endereco, cargo) VALUES ('Juliana Oliveira', 'Rua das Palmeiras, 789', 'Coordenador Financeiro');

#b
UPDATE pessoa SET nome = 'Carla Almeida' WHERE id = 1;

#c
SELECT nome, endereco FROM pessoa;

#d
DELETE FROM pessoa 
WHERE id = 3;	


#QUESTAO 3
create table empresa(
	matricula int not null auto_increment primary key,
    nome varchar(45),
    cpf varchar(45),
    cargo varchar(45),
    nProjetos int
);

#RESPOSNDA A QUESTÂO 3 AQUI
#a
INSERT INTO empresa (nome, cpf, cargo, nProjetos) VALUES ('Junior', '000.000.000-00', 'GP', '2');
INSERT INTO empresa (nome, cpf, cargo, nProjetos) VALUES ('Maria', '111.111.111-11', 'Desenvolvedor', '3');
INSERT INTO empresa (nome, cpf, cargo, nProjetos) VALUES('Carlos', '222.222.222-22', 'Tester', '4');
INSERT INTO empresa (nome, cpf, cargo, nProjetos) VALUES('Julia', '333.333.333-33', 'Desenvolvedor', '5');

#b
SELECT * FROM empresa WHERE nProjetos >= 4;

#c 
SELECT AVG(nProjetos) FROM empresa WHERE not cargo = 'GP';

#d
SELECT DISTINCT cargo FROM empresa;

#e
SELECT nome, cpf, nProjetos FROM empresa WHERE cargo = 'Desenvolvedor';


#QUESTAO 4
create table aluno(
	matricula int not null primary key,
    nome varchar(45),
    endereco varchar(45),
    ano_nasc int,
    curso varchar(45)
);

#b e c estão errados, pois nao existe valor default para matricula, ja que nao é gerada automaticamente 
#d está errado, pois '123' ja é a matricula de outro aluno

#inserindo de forma correta
INSERT INTO aluno(nome, matricula, endereco, ano_nasc, curso)VALUES('Janaina', '123', 'Rua 1', '1998', 'GEB');
INSERT INTO aluno(nome, matricula, endereco, ano_nasc, curso) VALUES ('Pedro', '145', 'Rua 2', '2000', 'GES');
INSERT INTO aluno (nome, matricula, endereco, ano_nasc, curso) VALUES('Jander','225', 'Rua 3', '1999', 'GEC');
INSERT INTO aluno (nome, matricula, endereco, ano_nasc, curso) VALUES('Lucca', '125', 'Rua 4', '1998', 'GEB');
INSERT INTO aluno (nome, matricula, endereco, ano_nasc) VALUES('Laura', '456', 'Rua 5', '1998');


#RESPOSNDA A QUESTÂO 4 AQUI
#f
SELECT nome, matricula, curso FROM aluno WHERE nome LIKE 'Jan____%';

#g
SELECT nome, curso FROM aluno WHERE nome LIKE 'L%a';

#h
SELECT DISTINCT ano_nasc, curso FROM aluno;

#i
SELECT nome, ano_nasc, curso FROM aluno WHERE ano_nasc <= '1998';

#j
SELECT nome, matricula, endereco, ano_nasc, curso FROM aluno limit 3;

#k
UPDATE aluno SET endereco = 'Republica GEB' WHERE curso = 'GEB';

#l 
DELETE FROM aluno WHERE endereco = 'Republica GEB';
