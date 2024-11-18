#include<iostream>
#include<iomanip>
#include<fstream

using namespace std;

//Struct para guardar as informações do arquivo
struct dados
{
	int nome;
	int tempo;
	int prioridade;
};

int main()
{
	//Declarando variáveis
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

	//Atribuindo os valores do arquivo nas respectivas variáveis
	while(!arq.eof())  
		//rodará a entrada de dados até o final do arquivo 
	{

		arq >> resultado[x].nome >> resultado[x].tempo >> resultado[x].prioridade;
		x++;	//Soma 1 ao valor de 'x', referente a quantidade de linhas usadadas dentro do txt
	}
	
	aux = 1;	//Atribui o valor um a variável aux
				//aux é referente a prioridade 
	
	for(i = x; i >= 0; i--)	//Contador que começa no valor de x e vai até zero
	{
		if(resultado[i].prioridade == aux)	//Se a variável resultado[i].prioridade for igual ao valor de aux entra no if
		{
			
			cout << "P" << resultado[i].nome;		//Printa a variável resultado[pri].nome
			for(j = 0; j < resultado[i].tempo; j++)	//Contador de 0 até o valor da variável esultado[pri].tempo
			{
				cout << '-';	//Printa a quantidade de '-' referente a quantidade de loops que vai dar o for
				s +=1;	//Soma 1 a variável 's' a cada loop
			}
			soma += s;	//Atribui o valor da varirável soma igual a soma dela mesmo com a soma de 's'
			if(aux == x)	//Se a variável aux for igual a x entra no if
							//se a prioridade for a ultima, ele fará a subtração do tempo de duração
				soma = soma - s;	//Faz uma subtração do ultimo valor atribuido a 's'
									//pois essa ultima somará como se tivesse mais um elemento
			i = x;	//O contador reseta novamente
			aux += 1;	//Soma 1 a 'aux'
		}
	}

	media = 1.00 * soma / x;	//Faz a divisão de 'soma' por x
	
	//Mostra o valor da media
	cout << endl;
	cout << fixed << setprecision(1);
	cout << "Tempo medio de espera: " << media << "ms" << endl;

	arq.close();
	return 0;
}
