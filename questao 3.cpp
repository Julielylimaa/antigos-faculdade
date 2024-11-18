#include <iostream>

using namespace std;

int main (){
	
	char nome[50];
	int N; // N indica a tarefa que será feita
	int litrosm, litrost; //litrosm: manhã; litrost: tarde
	float a;// media de litros
	int soma = 0, somatodos = 0; //somara todos os litros 
	float i = 0.0;//vai contar quantas vacas foram cadastradas
	int menorm, maiorm, menort, maiort, marcmanha, marctarde; //menor litro e maior litro
	
	
	cin >> N;
	
	while (N != -1){
		
		if (N == 1)
			i++;
		
		switch (N){
			case 1:
				cin.ignore();
				cin.getline(nome, 50);
				cin >> litrosm;
				cin >> litrost;
				soma = litrosm + litrost;
				somatodos += soma;
				
				
				cin >> N;
				break;
			
			case 2: 
				cout<< "Rendimento da vaca: " << nome << endl;
				a = soma / 2.0;
				
				if (a >= 1 && a <= 4)
					cout << "Rendimento baixo" << endl;
				
				else if (a > 4 && a <=7)
					cout << "Rendimento medio" << endl;
				
				else if (a > 7 && a <= 10)
					cout << "Rendimento alto" << endl;
				
				cin >> N;
				break;
			
			
			case 3:	
				cout << "Media total: " << somatodos/ i << endl;
				cin >> N;
				break;
			
			case 4:
				cout << "Maior qtd de litros de leite (manha/tarde)" << endl;
				cout << "Manha: " << maiorm << endl;
				cout << "Tarde: " << maiort << endl;
				cin >> N;
				break;
				
	}
	
	}
	
	
	
	return 0;
}