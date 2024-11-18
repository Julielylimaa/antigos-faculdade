#include <iostream>
#include <iomanip>

using namespace std;

struct dado{
	int n1, n2, n3, n4;
	float media;
};

int main (){
	
	dado *notas;
	
	notas = new dado;
	
	cin >> notas->n1 >> notas->n2 >> notas->n3 >> notas->n4;
	
	notas-> media = (notas->n1 + notas->n2 + notas->n3 + notas->n4)/4.0;
	
	
	cout << fixed << setprecision(2)<< notas->media << endl;
	
	delete notas;
	
	
	
	
	return 0;
}