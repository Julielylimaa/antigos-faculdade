#include <iostream>


using namespace std;


int main (){
	setlocale (LC_ALL, "Portuguese");
	
	int idade, grupo;
	int N; //flag
	int A = 0, B = 0, C = 0, D = 0;
	int total=0;
	float pa, pb, pc, pd; // percentual de cada plano
	
	
	
	
	do{
		cout << "Digite sua idade: ";
		cin >> idade;
		do{
			cout << "Digite seu grupo de risco(1 ou 2): ";
			cin >> grupo;
			
		}while (grupo < 1 || grupo > 2);
		
		cout << "Melhor opção: ";
		
		switch (grupo){
			case 1:
				
				if (idade <= 15){
					cout << "Plano A" << endl;
					A++;
				}
				else if (idade > 15 && idade <= 35){
					cout << "Plano A" << endl;
					A++;
				}
				else if (idade > 35 && idade <= 55){
					cout << "Plano B" << endl;
					B++;
				}
				else{
					cout << "Plano C" << endl;
					C++;
				}
				break;
			
			case 2:
				if (idade <= 15){
					cout << "Plano A" << endl;
					A++;
				}
				else if (idade > 15 && idade <= 35){
					cout << "Plano B" << endl;
					B++;
				}
				else if (idade > 35 && idade <= 55){
					cout << "Plano C" << endl;
					C++;
				}
					
				else{
					cout << "Plano D" << endl;
					D++;
				}
					
				break;
				
		}
		
		total ++;
		
		do{
			cout << "\nNovo cadastro? (1-sim  2-não): ";
			cin >> N;
			
		}while (N < 1 || N > 2);
		
		
	}while (N != 2);
	
	pa = (A * 100)/ (total * 1.0);
	pb = (B * 100)/ (total * 1.0);
	pc = (C * 100)/ (total * 1.0);
	pd = (D * 100)/ (total * 1.0);
		
	cout << "\nPercentual de possiveis segurados de cada plano: " << endl;
	
	cout << "\nPlano A: " << pa << " %" << endl;
	cout << "Plano B: " << pb << " %" << endl;
	cout << "Plano C: " << pc << " %" << endl;
	cout << "Plano D: " << pd << " %" << endl;
		
		
	
	
	
	
	return 0;
}