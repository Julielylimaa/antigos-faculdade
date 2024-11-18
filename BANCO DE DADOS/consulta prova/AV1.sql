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
  

