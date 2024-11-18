#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int main (){
	
	float f, k, q1, q2, d;
	
	cin >> q1 >> q2 >> d;
	
	f = (100 * q1 * q2) / pow(d, 2.0);
	
	cout << fixed<< setprecision(2);
	cout << "F = " << f;
	
	return 0;
	
}