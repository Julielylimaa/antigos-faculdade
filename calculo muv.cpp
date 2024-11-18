#include <iostream>
using namespace std;

int main()
{
	
	setlocale(LC_ALL, "Portuguese");
	float V0, S0, A, T, V, S;
	
	
	
	cout << "Digite a velocidade inicial: ";
	cin >> V0;
	cout << "Digite a posição inicial: ";
	cin >> S0;
	cout << "Digite a aceleração: ";
	cin >> A;
	cout << "Digite o tempo: ";
	cin >> T;
	
	
	
	V = V0 + (A*T); 
	S = S0+(V0*T) + ((A*T*T)/2);
	
	cout << "a velocidade final é " << V << endl; 
	cout << "a posição final é" << S << endl;
	

	

	
	
	return 0;
}