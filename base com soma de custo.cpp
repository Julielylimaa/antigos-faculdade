#include <iostream>
#include <cmath>

using namespace std;

int main (){
	int x;
	int i; // expoente
	int d = 3; //divisor //custo = 1
	
	float soma;
	
	cin >> x; //custo = 1
	
	soma = x/d; //custo = 1+1+1+1: 4
	
	for (i = 2; i <= 3; i++){ // custos separados (1, 2, 3) 
		//formula de custo = 3 + 5 * 3
		d --; // 3*3
		
		//ate aq total  = 1+4+18+9 = 32
		soma += pow(x, i)/ d; 
	}
		
	cout << soma << endl;
	

	
	return 0;
}

//soma do custo: 