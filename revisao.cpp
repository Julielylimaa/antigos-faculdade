#include <iostream>
#include <iomanip>


using namespace std;

int main (){
	setlocale (LC_ALL, "Portuguese");
	
	int idade, grupo;
	int x; // vai definir novo cadastro ou nao
	int total = 0;
	float pa, pb, pc, pd;
	
	int planoA = 0, planoB = 0, planoC = 0, planoD = 0;
	
	do {
		do {
			cout << "Digite sua idade: ";
			cin >> idade;
		}while (idade < 0);
		
		
		do {
			cout << "digite seu grupo: ";
			cin >> grupo;
		}while (grupo != 1 && grupo != 2);
		
		cout << "Melhor opção: ";
		
		switch (grupo){
			case 1: 
				if (idade <= 15){
					planoA ++;
					cout << "Plano A" << endl;
				}
					
				if (idade >15 && idade <= 35){
					planoA ++;
					cout << "Plano A" << endl;
				}
				if (idade >35 && idade <= 55){
					planoB ++;
					cout << "Plano B" << endl;
				}
				if (idade > 55){
					planoC ++;
					cout << "Plano C" << endl;
				}
					
				break;
			
			
			case 2:
				if (idade <= 15)
					planoA ++;
				if (idade >15 && idade <= 35)
					planoB ++;
				if (idade >35 && idade <= 55)
					planoC ++;
				if (idade > 55)
					planoD ++;
				break;
			
		}
		total ++;
	
		do {
			cout << "Digite 1 para novo cadastro e 0 para sair: "; 
			cin >> x;
		}while (x < 0 || x > 1);
		
			
	}while (x != 0 && x == 1);
	
	pa =  planoA * 100 / total * 1.0;
	pb =  planoB * 100 / total * 1.0;
	pc =  planoC * 100 / total * 1.0;
	pd =  planoD * 100 / total * 1.0;
	
	cout << fixed << setprecision(2);
	
	cout << "Plano A : " << pa << " %" << endl;
	cout << "Plano B : " << pb << " %" << endl;
	cout << "Plano C : " << pc << " %" << endl;
	cout << "Plano D : " << pd << " %" << endl;
	

	
	
	return 0;
}