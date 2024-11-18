#include <iostream>
#include <iomanip>

using namespace std;

int main (){
	int N, X, i; //numero de testes/ numero de animais
	int C = 0, R = 0, S = 0; // coelho, rato e sapo
	float pc, pr, ps;//porcentagem coelho/rato/sapo
	char letra;
	int soma = 0;
	
	
	cin >> N;
	
	for (i = 1; i <= N; i ++){
		cin >> X; 
		cin >> letra;
		
		soma += X;
		
		switch (letra){
			case 'C':
				C+= X;
				break;
			case 'R':
				R+= X;
				break;
			case 'S':
				S+= X;
				break;
		}
		
		
	
		pc = (100 * C)/ (soma * 1.0);
		pr = (100 * R)/ (soma * 1.0);
		ps = (100 * S)/ (soma * 1.0);
			
	}
	
	
	
	cout << "Total: " << soma << " cobaias" << endl;
	cout << "Total de coelhos: " << C << endl;
	cout << "Total de ratos: " << R << endl;
	cout << "Total de sapos: " << S << endl;
	
	cout << fixed<< setprecision(2);
	cout << "Percentual de coelhos: " << pc << " %" << endl;
	cout << "Percentual de ratos: " << pr << " %" << endl;
	cout << "Percentual de sapos: " << ps << " %" << endl;
	
	
	return 0;
}