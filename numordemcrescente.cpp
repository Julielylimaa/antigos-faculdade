#include <iostream>


using namespace std;

int main(){
	int x, y, z, var, num1, num2, num3; // var é uma variavel para guardar valores
	cin >> x >> y >> z;
	num1 = x;
	num2 = y;              //salva os numeros originais 
	num3 = z;
	
	if (y < x){
		var = x;  //salva o valor de x para colocar em y dps 
		x = y;
		y = var;
	}
	
	if (z < x){
		var = x;
		x = z;
		z = var;
	}	
	
	if (z < y){
		var = y;
		y = z;
		z = var;
	}
	
	// a logica é reorganizar os valores das variaveis de modo q vc coloque o maior na ultima variavel a ser impressa 	
	
	cout << x << endl << y << endl << z << endl;
	cout << endl << num1 << endl << num2 << endl << num3 << endl;
	
	
	return 0;
}