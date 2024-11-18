#DQL - select
SELECT Dnome, Dnumero
FROM departamento WHERE Dnumero >3 ;

#Join -> select envolvendo mais de uma tabela seguido de um condicional
#metodo tradicional
SELECT Dnome, Pnome 
FROM departamento, empregado
WHERE Dnumero_Departamento = Dnumero; 

#inner join
SELECT Dnome, Pnome
FROM departamento INNER JOIN Empregado
WHERE DNumero_Departamento = DNumero; 

#Join com 3 tabelas
SELECT e.Pnome, p.Pnome
FROM empregado AS e, projeto AS p, trabalha_em AS te
WHERE te.PNumero_Projeto = p.PNumero AND te.SSN_Empregado = e.SSN;

#PRODUTO CARTESIANO - pode ser feito em tabelas que nao se relacionam, diferente do Join
SELECT *
FROM empregado, departamento;

#DISTINCT
SELECT DISTINCT SSN_Supervisor
FROM empregado;

#Join para encontrar o nome dos supervisores
SELECT DISTINCT s.Pnome 
FROM empregado AS e, empregado AS s
WHERE e.SSN_Supervisor = s.SSN;

#Buscas textuais
SELECT Pnome
FROM empregado
WHERE PNome LIKE 'J%n';

#SIMULAÇOES MATEMATICAS - nao alteram nada no banco
SELECT PNome as 'Empregado', Salario as 'Salario atual', Salario * 1.1 as 'Salario ajustado'
FROM empregado;

#media salarial dos empregados
SELECT avg(salario), min(salario), max(salario), sum(salario) FROM empregado;

