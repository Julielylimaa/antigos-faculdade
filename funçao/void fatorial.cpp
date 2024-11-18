#include <iostream>

using namespace std;

void fatorial(int &n){
	
	int fat = n;
	for (int i = 1; i < n; i++){
		fat *= i;
	}
	cout << fat << endl;
}


int main (){
	int x;
	
	cin >> x;
	
	fatorial(x);
	
	
	return 0;
}