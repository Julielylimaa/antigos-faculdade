#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main (){
    float A, B, C, D, X1, X2;
    cin >> A >> B >> C;
    
    D = pow (B, 2) - (4 * A * C);
    
    if (D < 0 || A == 0){
		cout << "Impossivel" << endl;
	}
    	
    else{
		X1 = (-B + sqrt(D))/(2 * A);
    	X2 = (-B - sqrt (D))/(2 * A);
    	
    	cout << fixed << setprecision(5);
    	cout << "X1 = " << X1 << endl << "X2 = " << X2 << endl;
    	
	}
    
    return 0;
}