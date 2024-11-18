#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;

int main()
{
	int x;
	
	cin >> x;
	
	int horas = x/3600;
	int minutos = (x%3600)/60;
	int segundos = (x%3600) %60;
	
	cout << horas << ":" << minutos << ":" << segundos << endl;
	
	return 0;
}


