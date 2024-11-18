drop database if exists av1;
create database av1;
use av1;

#COMANDO PARA DESATIVAR O SAFE MODE
set SQL_SAFE_UPDATES = 0;

# 1 - A

create table if not exists aluno(
  matricula varchar(15) not null primary key,
  nome varchar(45),
  idade int,
  curso varchar(45),
  periodo int
  );
  
  #a
INSERT INTO aluno(matricula, nome, idade,curso, periodo) VALUES ('1234', 'Camila', 22, 'GEC', 2);
INSERT INTO aluno(matricula, nome, idade,curso, periodo) VALUES ('4567', 'Marcelo', 25, 'GEB', 3);
INSERT INTO aluno(matricula, nome, idade,curso, periodo) VALUES ('9876', 'Felipe', 19, 'GES', 2);
INSERT INTO aluno(matricula, nome, idade,curso, periodo) VALUES ('1594', 'Mariana', 20, 'GEC', 4);
INSERT INTO aluno(matricula, nome, idade,curso, periodo) VALUES ('8462', 'Flávio', 26, 'GEA', 6);
INSERT INTO aluno(matricula, nome, idade,curso, periodo) VALUES ('4866', 'Maria', 18, 'GEC', 3);


#b
UPDATE aluno SET periodo = 4 WHERE nome = 'Marcelo';

#c
SELECT * FROM aluno WHERE  curso = 'GEC';

#d
DELETE FROM aluno WHERE nome = 'Mariana';

#e 
SELECT curso FROM aluno WHERE periodo = 2;

#f
SELECT nome, idade, curso FROM aluno WHERE periodo = 3;

#g
SELECT * FROM aluno limit 3;

#h
SELECT nome FROM aluno  WHERE nome like 'M_____%';

#i
SELECT count(nome) FROM aluno WHERE idade >21;