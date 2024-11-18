#include <iostream>

using namespace std;

int main(){
	float A, B, div;
	char x;
	
	
	cin >> A >> B >> x;
	div = A/B;
	
	switch (x){
		case '+':
			cout << A + B << endl;
			break;
		case '-':
			cout << A - B << endl;
			break;
		case '/':
			if (B != 0)
				cout << div << endl;
			else 
				cout << "Impossivel" << endl;
			break;
		case '*':
			cout << A * B << endl; 
			break;
		
	default: 
		cout << "DDD nao cadastrado" << endl;
		
	}
	
	
	return 0;
}