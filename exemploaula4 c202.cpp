#include <iostream>


using namespace std;

int main () {
	
	setlocale (LC_ALL, "Portuguese");
	float sbase, tempo;
	
	cout << "Digite seu salário base: ";
	cin >> sbase;
	cout << "Digite seu tempo de trabalho: ";
	cin >>tempo;
	
	if (tempo <= 5)
		cout << sbase << endl;
	else 
		cout << sbase + (sbase * 0.1) << endl;
	
	
	return 0;
}