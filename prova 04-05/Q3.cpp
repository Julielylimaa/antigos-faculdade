#include <iostream>
#include <cstring>

using namespace std;

int main (){
	setlocale (LC_ALL, "Portuguese");
	
	int x; // flag
	
	char codigo[5];//codigo do consumidor 
	char tipo[2];//tipo de consumo (residencial ou comercial)
	char fonte[2]; //fonte energetica usada (eletrica, solar ou outras)
	
	int total = 0; //vai somar quantos consumidores foram pesquisados
	int r = 0, c = 0; // soma de residencial e comercial
	int rs = 0; // residencias com energia solar
	int ce = 0; // comercios com energia eletrica
	
	float pR;
	float pC;
	float pce;
	float prs; 
	
	do{
		cout << "Leitura de dados:" << endl;
		cout << "Digite o código: ";
		cin >> codigo;
		
		cout << "Tipo de consumo: R (residencial) ou C (comercial): ";
		cin >> tipo;
		
		cout << "Fonte energética: E (elétrica), S (solar) ou O (outras): ";
		cin >> fonte;
		
		
		total ++;
		
		
		if (strcmp(tipo, "R") == 0) //comparação string: retorna 0 se for igual
		{	
			r ++;
			if (strcmp(fonte, "S") == 0) // se tipo for residencial e a fonte solar
				rs++; // soma 1
		
		}
		if (strcmp(tipo, "C") == 0){
			c ++;
			if (strcmp(fonte, "E")== 0) // se o tipo for comercial e a fonte eletrica 
				ce++; //soma 1
		}

		
		
		
		do{
			cout << "Digite 1 para novo cadastro ou 0 para sair: ";
		   	cin >> x;
		}while (x < 0 || x > 1); //se o usuario digitar errado rodará de novo.
		
		
	}while (x != 0 && x ==1); // 0 para sair e 1 para novo cadastro
	

	pR = (r * 100)/(total * 1.0); //porcentagem de residencial 
	pC = (c * 100)/(total * 1.0);  //porcentagem de comercial
	
	pce = (ce * 100)/ (c * 1.0); // porcentagem de comercio com energia eletrica
	prs = (rs * 100) /( r * 1.0); //porcentagem de residencia com energia solar
	
	cout << "\nConsumidores pesquisados: "<< total << endl;
	cout << "Tipo Residencial: " << pR << "%" << endl;
	cout << "Tipo Comercial: " << pC << "%" << endl;
	cout << "Comércios que usam energia elétrica: " << pce << "%" << endl;
	cout << "Residências que usam energia solar: " << prs << "%" << endl;
	
	
	
	return 0;
}