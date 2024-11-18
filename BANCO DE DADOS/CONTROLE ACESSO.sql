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

#definir autorizações crud = select insert update delete
GRANT SELECT, ALTER, DROP, UPDATE, DELETE, CREATE, 
INSERT ON C207.alunos TO 'Monitor';

#PRIVILEGIO EM TODO O BANCO
GRANT ALL PRIVILEGES ON C207.* TO 'Professor';

#REVOGAR ACESSO
REVOKE INSERT ON C207.alunos FROM 'Monitor';
REVOKE CREATE, ALTER, DROP ON C207.* FROM 'Professor';

SHOW GRANTS FOR 'Monitor'; 

#APAGAR USER
DROP USER 'Monitor';
DROP USER 'Professor';





