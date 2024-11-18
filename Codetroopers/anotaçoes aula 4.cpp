//desafio da semente 
//Analise de complexidade: deduzir quanto tempo o codigo vai levar atraves 
//da estimativa do numero de operaçoes que o codigo possui

//para resolver: achar uma formula pra calcular 
//separar os intervalos separadamente e analisar quantos dias eles vao levar
//maior tempo é o q é considerado

//se o intervalo for impar: arredonda para cima
// intervalo /2
//antes da primeira semente e dps da ultima: apenas soma as casas


//--------SOMA DE PREFIXOS----------

//reaproveitar somas que ja foram feitas acumulando seus valores
//cria o vetor dos valores
//cria um vetor soma e acumula as somas deles de acordo com a soma de todos
//elementos anteriores da casa 
//para somar os elementos entre i - j: pega no vetor soma j - (i-1)
