#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main (){
	setlocale (LC_ALL, "Portuguese");
	
	int x, i; //x: o valor de entrada; i: parametro do for
	float f = 0; // f = f(x)
	cin >> x; 
	
	if (x == 0) //como x é divisor ele nao pode ser igual a zero
		cout << "Cálculo impossível para este valor de x" << endl;
	else {
		for (i=1; i<=5; i++){
			f += i/ pow(x, i);
		}
		cout << "f(x): " << fixed << setprecision(5) << f << endl;
	}
	
	
	return 0;
}