#include <iostream>
using namespace std;

int main()
{
	
	setlocale(LC_ALL, "Portuguese");
	float V0, S0, A, T, V, S;
	
	
	
	cout << "Digite a velocidade inicial: ";
	cin >> V0;
	cout << "Digite a posi��o inicial: ";
	cin >> S0;
	cout << "Digite a acelera��o: ";
	cin >> A;
	cout << "Digite o tempo: ";
	cin >> T;
	
	
	
	V = V0 + (A*T); 
	S = S0+(V0*T) + ((A*T*T)/2);
	
	cout << "a velocidade final � " << V << endl; 
	cout << "a posi��o final �" << S << endl;
	

	

	
	
	return 0;
}