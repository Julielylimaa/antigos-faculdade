SELECT <lista de atributos>
FROM <lista de tabelas>
WHERE <condição>

GROUP BY - Utilizada para separar os registros selecionados em grupos específicos.
HAVING - Utilizada para expressar a condição que deve satisfazer cada grupo.
ORDER BY - Utilizada para ordenar os registros selecionados com uma ordem específica.

Usa os operadores AND, OR e NOT, juntamente com os operadores <,>,=,<>,<= e >= na construção dos seus predicados.
(NOT) BETWEEN - Utilizado para específicar um intervalo de valores.
LIKE - Utilizado na comparação de textos. LIKE + 'texto%', significa buscar todos os resultados com o mesmos inicio de texto.
IN - Utilizado para buscar dados de valores específicos dentro de WHERE.

AVG - Utilizada para calcular a média dos calores de um campo determinado.
COUNT - Utilizada para devolver o número de registros da seleção
SUM - Utilizada para devolver a soma de todos os valores de um campo.
MAX - Utilizada para devolver o valor mais alto de um campo específicado.
MIN - Utilizada para devolver o valor mais baixo de um campo específicado.

#1:1
SELECT Empregado.Nome, Departamento.Nome FROM Empregado JOIN Departamento;

SELECT Empregado.Nome, Departamento.Nome FROM Empregado JOIN Departamento 
ON Empregado.Departamento_idDepartamento = Departamento.idDepartamento;

#1:N
SELECT Empregado.Nome, Dependentes.Nome FROM Empregado JOIN Dependentes;

SELECT E.Nome, D.Nome FROM Empregado AS E INNER JOIN Dependentes as D;

SELECT E.Nome , D.Nome FROM Empregado AS E JOIN Dependentes AS D ON
D.empregado_idEmpregado = E.idEmpregado;

SELECT E.Nome , D.Nome FROM Empregado AS E JOIN Dependentes AS D ON
D.empregado_idEmpregado = E. idEmpregado ORDER BY E.Nome;

#N:M
SELECT E.nome , P.nome , EP.Data_Conclusao FROM Empregado AS E JOIN
Empregado_has_Projeto AS EP ON E.idEmpregado = EP.Empregado_idEmpregado JOIN 
Projeto AS P ON P.idProjeto = EP.Projeto_idProjeto;

SELECT E.nome , P.nome , EP.Data_Conclusao FROM Empregado AS E JOIN
Empregado_has_Projeto AS EP ON E.idEmpregado = EP.Empregado_idEmpregado JOIN 
Projeto AS P ON P.idProjeto = EP.Projeto_idProjeto ORDER BY EP.Data_Conclusao;
