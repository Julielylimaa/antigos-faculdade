#include <iostream>

using namespace std;

int main (){
	int X, Y, impar = 0, soma = 0, marc;
	
	
	cin >> X >> Y;
	
	
	for (X= X-1; X > Y; X--){
		marc  = 0;
		if ((X % 2) != 0)
			marc = X; //marca os numeros q serao impar
		
		soma= soma + marc;// somara os numeros impares 
		
	}
	
	cout << soma << endl;
	
	
	return 0;
}