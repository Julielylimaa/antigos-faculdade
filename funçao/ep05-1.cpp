#include <iostream>

using namespace std;

float converte(float x){
	//x é o valor de entrada em mph
	float y = 1.60934;
	float convertido;
	
	convertido = x * y;
	//valor de entrada será convertido para kmh 
	
	return convertido;
}


int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	
	float x, resultado;
	
	do{
		cout << "Digite o valor (em mph) que será convertido (para km/h): ";
		cin >> x;
	}while (x <= 0);
	
	resultado = converte(x);
	
	cout << resultado << " km/h" << endl;
	
	return 0;
}