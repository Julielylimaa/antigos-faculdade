#CREATE
create database if not exists aula8;
create table if not exists alunos(
	nome varchar(15),
    email varchar(45)
);
create user 'monitor' identified by '123';

#ALTER
alter table alunos modify nome varchar(45) not null;
alter table alunos add endereco varchar(45);
alter table alunos drop column email;

#DROP 
drop database if exists aula8;
drop table alunos;
drop user 'monitor';

#SHOW
show databases;
show grants for 'monitor';
show tables;