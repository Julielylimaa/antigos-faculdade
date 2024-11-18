#include <iostream>

using namespace std;

struct valores{
	int v;
};

int main (){
	
	int x;
	int y = 1;
	int soma  = 0;
	
	valores numero; //variavel da struct 
	
	do {
		cin >> x;
	} while (x< 0 || x > 10);
	
	
	while (y <= x){
		cin >> numero.v;
		y++;
		
		if (numero.v % 2 ==0){
			soma+= numero.v;
		}
		
	}
	
	
	cout << soma << endl;
	
	return 0;
}