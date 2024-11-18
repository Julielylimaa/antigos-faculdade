#include <iostream>
#include <iomanip>
using namespace std;

int main (){
	setlocale (LC_ALL, "Portuguese");
	
	int x, num, soma = 0, positivo = 0; // x é variavel q vai definir o limite de entrada no for 
	
	for (x = 1; x <= 10; x++){
		cin >> num; // a entrada num vai ser repetida ate q x = 10
		soma += num; // cada num de entrada sera somado para dps fazer a media
		if (num > 0)
		{
			positivo++;  // cada num positivo na entrada vai somar 1 na variavel positivo
		}
		
	}
	cout << fixed<< setprecision(2);
	
	cout << "Positivos = " << positivo << endl;
	cout << "Média = " << soma/10.0 << endl; 
	
	
	
	return 0;
}