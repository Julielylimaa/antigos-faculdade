#include <iostream>


using namespace std;

int main (){
	int N, x, maior = -1000, menor = 1000;
	
	cin >> x;
	
	for (x = x; x > 0; x--){
		cin >> N; 
		
		if (N > maior)
			maior = N;
		
		if (N < menor)
			menor = N;
	}
	cout << "Maior: " << maior << endl;
	cout << "Menor: " << menor << endl;
	
	
	
	return 0;
}