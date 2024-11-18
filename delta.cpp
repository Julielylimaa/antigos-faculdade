#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a;
	int b;
	int c;
	cout << "digite o valor de a :" ;
	cin >> a;
	
	cout << "digite o valor de b :" ;
	cin >> b;
	
	cout << "digite o valor de c :" ;
	cin >> c;
	
	int delta = (b * b) - 4 * a * c;
	cout << "delta eh ";
	cout << delta;
	
	

	return 0;
}