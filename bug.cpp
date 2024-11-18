#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	
	float d, l, e, x, y, z;
	
	cin >> x >> y >> z;
	
	d = x / 4.04;
	l = y / 5.32;
	e = z / 4.60;
	
	cout << fixed<< setprecision(2);
	cout <<"Dolar: " << d << endl;
	cout << "Libra: " << l << endl;
	cout << "Euro: " << e << endl;
	
	
	return 0;
}