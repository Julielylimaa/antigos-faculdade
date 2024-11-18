#include <iostream>
#include <cstring>

using namespace std;

int main (){
	int x;
	char texto[50];


	
	cin.getline (texto, 50);
	
	
	for (x = strlen(texto) - 1; x >= 0; x--){
		cout << texto[x];
	}
	
	

	
	return 0;
}