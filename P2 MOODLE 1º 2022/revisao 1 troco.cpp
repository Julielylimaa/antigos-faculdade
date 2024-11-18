#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	float dinheiro; //quanto dinheiro está levando 
	float total; //valor total da compra 
	float troco; //valor do troco 
	
	
	//entrada de dados
	cin >> dinheiro >> total;
	
	//calculando o valor do troco
	troco = dinheiro - total;
	
	//Saida de dados
	cout << fixed << setprecision(2);
	cout << "TROCO = " << troco << endl;
	return 0;
}