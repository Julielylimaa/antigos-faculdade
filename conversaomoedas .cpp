#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int C;
	double valor;
	cin >> valor >> C;
	
	cout << fixed << setprecision(2);
	 
	switch (C){
		case 1:
			cout << "R$ " << valor * 3.86 << endl;
			break;
		case 2:
			cout << "R$ " << valor * 3.77 << endl;
			break;
		case 3:
			cout << "R$ " << valor * 4.41 << endl;
			break;
		case 4: 
			cout << "R$ " <<valor * 0.19 << endl;
			break;
		case 5:
			cout << "R$ " << valor * 5.0 << endl;
			break;
		default:
			cout << "Codigo invalido!" << endl;
	}
	
	
	
	return 0;
}