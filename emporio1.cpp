#include <iostream>
#include <iomanip>

using namespace std;

int main (){
	int cod, idade;
	char nome[50], cidade [50];
	float valor, pagamento, troco; // valor ja é valor total
	
	cin >> cod >> valor;
	cin.ignore(); //usa sempre q for usar getline dps de ler um numero
	cin.getline (nome, 50);
	cin.getline (cidade, 50);
	cin >> idade >> pagamento;
	
	switch (cod){
		case 1:
			cout << "Queijo" << endl;
			break;
		case 2: 
			cout << "Geleia" << endl;
			break;
		case 3:
			cout << "Doce" << endl;
			break;
		case 4:
			cout << "Refrigerante" << endl;
			break;
		case 5:
			cout << "Sorvete" << endl;
			break;
		case 6:
			cout << "Presunto cru" << endl;
			break;
		case 7: 
			cout << "Vinho"	<< endl;
			break;	
	}
	troco = pagamento - valor;
	
	cout << fixed << setprecision (2);
	cout << "Valor total = " << valor << endl;
	cout << "Troco = " << troco << endl;
	
	
	return 0;
}