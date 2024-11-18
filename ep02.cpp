#include <iostream>
#include <cmath>

using namespace std;


int main (){
	float x, y, f;
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
	
	if (x > y)
	{
		f = pow(x, 2) - pow(y, 2) + (2 * x * y);
		cout << "f(x,y) = " << f << endl;
	}
	
	else if (x == y)
	{
		f = (2 * x * y) + x + y;
		cout << "f(x,y) = " << f << endl;
	}
	
	else if (x < y)
	{
		f = pow (y, 2) + pow (x, 2) + (2 * x * y);
		cout << "f(x,y) = " << f << endl;
		
	}
	
	return 0;
}