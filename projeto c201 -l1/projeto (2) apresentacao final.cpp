#include<iostream>
#include<iomanip>
#include<fstream

using namespace std;

//Struct para guardar as informa��es do arquivo
struct dados
{
	int nome;
	int tempo;
	int prioridade;
};

int main()
{
	//Declarando vari�veis
	char nomeARQ[50];
	int x = 0;
	int i, j;
	int soma = 0;
	double media;
	int aux;
	int s = 0;
	
	
	dados resultado[50];//vetor da struct. 
	
	
	ifstream arq;


	cin.getline(nomeARQ, 50);	//Entra com o nome do arquivo
	arq.open(nomeARQ, ifstream::in);

	//Atribuindo os valores do arquivo nas respectivas vari�veis
	while(!arq.eof())  
		//rodar� a entrada de dados at� o final do arquivo 
	{

		arq >> resultado[x].nome >> resultado[x].tempo >> resultado[x].prioridade;
		x++;	//Soma 1 ao valor de 'x', referente a quantidade de linhas usadadas dentro do txt
	}
	
	aux = 1;	//Atribui o valor um a vari�vel aux
				//aux � referente a prioridade 
	
	for(i = x; i >= 0; i--)	//Contador que come�a no valor de x e vai at� zero
	{
		if(resultado[i].prioridade == aux)	//Se a vari�vel resultado[i].prioridade for igual ao valor de aux entra no if
		{
			
			cout << "P" << resultado[i].nome;		//Printa a vari�vel resultado[pri].nome
			for(j = 0; j < resultado[i].tempo; j++)	//Contador de 0 at� o valor da vari�vel esultado[pri].tempo
			{
				cout << '-';	//Printa a quantidade de '-' referente a quantidade de loops que vai dar o for
				s +=1;	//Soma 1 a vari�vel 's' a cada loop
			}
			soma += s;	//Atribui o valor da varir�vel soma igual a soma dela mesmo com a soma de 's'
			if(aux == x)	//Se a vari�vel aux for igual a x entra no if
							//se a prioridade for a ultima, ele far� a subtra��o do tempo de dura��o
				soma = soma - s;	//Faz uma subtra��o do ultimo valor atribuido a 's'
									//pois essa ultima somar� como se tivesse mais um elemento
			i = x;	//O contador reseta novamente
			aux += 1;	//Soma 1 a 'aux'
		}
	}

	media = 1.00 * soma / x;	//Faz a divis�o de 'soma' por x
	
	//Mostra o valor da media
	cout << endl;
	cout << fixed << setprecision(1);
	cout << "Tempo medio de espera: " << media << "ms" << endl;

	arq.close();
	return 0;
}
