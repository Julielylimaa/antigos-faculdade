#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main (){
	int i;
	float fx, x;
	
	cin >> x;
	
	fx = x;
	
	for (i = 2; i <= 10; i += 2){
		fx += x/i;
	}
		
	cout << "f(x) = " << fx << endl;
	return 0;
}