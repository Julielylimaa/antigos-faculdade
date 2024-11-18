#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main (){
	int X, Y;
	float Eq1, Eq2, Eq3;
	
	cin >> X >> Y;
	
	if (X < Y && X != -3){ 
		Eq1 = (X + (2 * Y))/ (3.0 + X);
		cout << fixed << setprecision(2);
		cout << cbrt(Eq1) << endl;	
	}
	else if (X< Y && X == -3){
		cout << "Voce esta com os numeros errados do desafio";
	}
    if (X == Y && Y >= 0) {
		Eq2 = pow (X,3) - (X * Y) + sqrt(Y);
		cout << fixed << setprecision(2);
		cout << Eq2 << endl;
	}
	 else if (X == Y && Y < 0){
		 cout << "Voce esta com os numeros errados do desafio";
	 }
	 
	 else if (X > Y && Y != 0){
		Eq3 = (-X + sqrt (pow (X, 2.0) - (4 * Y))) / (2.0 * Y);
		cout << fixed << setprecision(2);
		cout << Eq3 << endl;
	}
	else if (X > Y && Y == 0){
		cout <<  "Voce esta com os numeros errados do desafio";
	}
	 
	return 0;
}