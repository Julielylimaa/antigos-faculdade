#include <iostream>
#include <iomanip>


using namespace std;

int main (){
	double d, sinal = 1, n = 3, f = 1;//d: denominador; n:numerador; 
	int cont, j; //cont: parametro do for  
	
	for (cont = 1; cont <=4; cont++) {
		d = 1;
		for (j = 2; j <= n; j++)// for para achar o fatorial do denominador
			
			d = d * j; 
		
		f = f + n/d * (sinal);		
		
		n = n + 2; // n aumenta de 2 em 2
		sinal = sinal * (-1); // varia entre positivo e negativo 
		  		
	}
	cout << "f(x): " << fixed << setprecision(5) << f << endl;
	
	return 0;
}