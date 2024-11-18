#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double raiz(double x,double x0,double e){
	if (abs((x0 * x0) - x) <= e)
		return x0;
	else 
		return raiz(x, (x0*x0 +x)/(2*x0), e);
}

int main (){
	double x, x0, e;
	
	cin >> x >> x0 >> e;
	cout << fixed << setprecision(4);
	cout << raiz(x,x0,e) << endl;
	
	return 0;
}