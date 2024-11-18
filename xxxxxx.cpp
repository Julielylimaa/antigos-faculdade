#include <iostream>
#include <iomanip>

using namespace std;

int main (){
	setlocale (LC_ALL, "Portuguese");
	
	double X, d = 0, rep = 1; // X= entrada ; d = denominador;
	double S; // somatorio
	
	cin >> X;
	S = (X + d)/ (d + 1);
	
	while (S <= 10000){
		d++;
		
		S = S + (X + d)/(d + 1.0); 
		
	
			
		rep++;	
	}
	
	cout << fixed << setprecision(2);
	cout << "S = " << S << endl << rep << " Repetições" << endl;
	
	
	return 0;
}