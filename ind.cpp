#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	float idade;
	cin >> idade;
	
	cin.ignore();
	char nome [100];
	cin.getline(nome, 100); 
	
	float ind;
	
	ind = (idade/42.0) - (idade-3.0);
	
	
	cout << fixed<< setprecision(4);
	cout << "Ind = " << ind << endl; 
	
	return 0;
}














