#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;

int main (){
	int x;
	int N; // numero de termos que se pretende usar.
	double f = 0; //f(x)
	int exp = 1; // expoente
	double div = 2; //divisor 
	int i, j; //parametros for
	int n = 2;//para achar fatorial
	
	
	cout << "Valor de x: " ;
	cin >> x;
	
	cout << "Quantos termos? ";
	cin >> N;
	
	
	
	for (i = 1; i <= N; i++){
		div = 1;
		
		for (j = 1; j <= n; j++) // fatorial 
		{
			div = div * j;
		}
		
		f += pow(x, exp)/ div;
		
		exp += 2;
		n += 2;
	}
	
	cout << fixed << setprecision (6);
	cout << "f(x) = " << f << endl;
	
	
	
	return 0;
}