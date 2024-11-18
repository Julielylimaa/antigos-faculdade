#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

float elevado(int xb, int xa, int yb, int ya){
	//função que elevará os valores dentro da raiz
	
	int a, b, valor;
	
	a = xb - xa;
	b = yb - ya;
	
	valor = (a * a) + (b * b);
	
	return valor;
}

int main (){
	int xa, xb, ya, yb;
	
	cin >> xa >> ya >> xb >> yb;
	
	double d;
	int resultadofuncao;
	
	resultadofuncao = elevado(xb,xa,yb,ya); //salva o valor que será 
											//colocado na raiz
	
	d = sqrt(resultadofuncao); //raiz quadrada
	
	cout << fixed << setprecision (2);
	cout << "Distancia = " << d << endl;
	
	
	
	
	
	return 0;
}