#include <iostream>

using namespace std;

void soma (int x, int y, int &s){
	s= x+y;
}

int main (){
	int a,b;
	int s = 0;
	
	
	//ler a e b
	cin >> a >> b;
	
	//calcular a+b
	soma(a,b,s);
	
	//mostrar resultado
	cout << "soma = " << s << endl;
	
	return 0;
	
}