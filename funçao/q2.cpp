#include <iostream>

using namespace std;

int N;
int resultado[11];

void tabuada(){
	
	
 	
 	for (int i = 1; i <= 10; i++){
		 resultado[i] = N * i;
	 }
	 
	 for (int j = 1; j <=10 ; j++){
	 	 cout << N << " x " << j << " = " << resultado[j] << endl;
	}
}

int main (){
	
	cin >> N;
	
	tabuada();
	
	
	return 0;
}