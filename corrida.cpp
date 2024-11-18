#include <iostream>

using namespace std;

int main (){
	int N, Ni, ganhador = 1, menor = 100;
	cin >> N;
	
	for (N ; N > 0; N--){
		cin >> Ni;
		ganhador++;
		
		if (Ni < menor){
			menor = Ni;

		}
	}
	
	cout << menor << endl << ganhador << endl;
	
	return 0;
}