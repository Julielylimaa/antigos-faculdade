#include <iostream>
#include <cmath>


using namespace std;

int main (){
	float t, x;
	
	cout << "t = ";
	cin >> t;
	if (t >= -1 && t <= 1)// -1 <= t <= 1
	{
		x = 1 - abs(t); // funcao x(t)
		
		cout << "x(t) = " << x << endl;	
	}
	else // se t nao se encaixa na primeira condicao
	{
		x = 0;
		cout << "x(t) = " << x << endl;
	}
		
	return 0;
}