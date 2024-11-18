#include <iostream>
#include <cmath>

using namespace std;

int main (){
	int x;
	int i; // expoente
	float d = 50.0; //divisor 
	float termo;
	float soma = 0;
	
	cout << "Valor de x: ";
	cin >> x;
	
	
	
	for (i = 1; i <= 50; i++){
		termo = pow(x, i)/ d;
		
		soma += termo;
		d --;
	}
		
	cout << "f(x) = " << soma << endl;

	return 0;
}