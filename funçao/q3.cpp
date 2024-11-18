#include <iostream>

using namespace std;

int conta(int x, int y){
	
	for (int i = 1; i < y; i++){
		x = x * x; 
	}
	
	return x;
}
int main (){
	int x, y;
	int resultado;
	
	cin >> x >> y;
	
	resultado = conta(x, y);
	
	cout << resultado << endl;
	
	
	return 0;
}