DROP DATABASE IF EXISTS C207;
CREATE DATABASE C207;

USE C207;

CREATE TABLE alunos(
	matricula int,
    curso varchar(45),
    nome varchar(45),
    periodo int,
    primary key(matricula)
);

#criar usuarios
CREATE USER 'Monitor' IDENTIFIED BY '1111';
CREATE USER 'Professor' IDENTIFIED BY '2222';

#definir privilegios
GRANT SELECT, UPDATE, DELETE, INSERT, CREATE ON C207.alunos TO 'Monitor';
GRANT ALL PRIVILEGES ON C207.* TO 'Professor';

#remover privilegio
REVOKE INSERT ON C207.alunos FROM 'Monitor';
REVOKE CREATE, DROP ON C207.* FROM 'Professor';