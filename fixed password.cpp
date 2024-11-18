#include <iostream>
#include <iomanip>


using namespace std;

int main (){
	
	float x;
	int i = 0;
	float soma = 0.0;
	float media;
	int dnv = 1;
	x = 1;
	
	while (dnv != 2){
	
		while (i < 2){
			cin >> x;
			if (x >= 0 && x <= 10){
				i++;
				soma += x;
			}
			else
				cout << "nota invalida" << endl;
		
		}
		media = soma / 2.0; 
		cout << fixed << setprecision(2) << "media = " << media << endl;
		cout << "novo calculo (1-sim 2-nao)" << endl;
		
		i = 0;
		soma = 0;
		
		cin >> dnv;
		
		while(dnv < 1 || dnv > 2){
			cout << "novo calculo (1-sim 2-nao)" << endl;
			cin >> dnv;
		}	
		
					
		
		
	
	}	
	
	return 0;
}